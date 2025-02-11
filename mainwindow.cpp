#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    m_current_year(QDate::currentDate().year()),
    m_retirement_year(),
    m_current_age(),
    m_retirement_age()
{
    ui->setupUi(this);

    // store relevant data as numerical
    m_current_age = ui->lineEdit_curr_age->text().toInt();
    m_retirement_age = ui->lineEdit_ret_age->text().toInt();
    m_retirement_year = m_current_year + (m_retirement_age - m_current_age);
    m_retirement_years = ui->lineEdit_ret_years->text().toInt();

    // format columns
    ui->treeWidget->setColumnWidth(COL_DESCRIPTION, 210);
    ui->treeWidget->setColumnWidth(COL_INFLATION, 50);

    set_column_alignment(COL_INFLATION, ITEM_ALIGNMENT);

    ui->treeWidget->addAction(ui->actionRevert_to_Formula);

    recalc_expenses();

    // on_actionExpand_All_triggered();
    on_actionCollapse_Categories_triggered();
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::recalc_expenses()
{
    populate_years();
    calculate_expense_rows();
    color_rows();
    calculate_subtotals();
}


void MainWindow::set_column_alignment(int column, Qt::Alignment align)
{
    int num_tl_items = ui->treeWidget->topLevelItemCount();
    for ( int ii = 0; ii < num_tl_items; ii++ )
    {
        QTreeWidgetItem* tl_item = ui->treeWidget->topLevelItem(ii);
        tl_item->setTextAlignment( column, align );

        // process child nodes
        for ( int jj = 0; jj < tl_item->childCount(); jj++ )
        {
            QTreeWidgetItem* child = tl_item->child( jj );
            child->setTextAlignment( column, align );

            for ( int kk = 0; kk < child->childCount(); kk++ )
            {
                QTreeWidgetItem* item = child->child( kk );
                item->setTextAlignment( column, align );
            }
        }
    }
}


void MainWindow::populate_years()
{
    int num_tl_items = ui->treeWidget->topLevelItemCount();
    for ( int ii = 0; ii < num_tl_items; ii++ )
    {
        QTreeWidgetItem* tl_item = ui->treeWidget->topLevelItem(ii);

        if (tl_item->text(COL_DESCRIPTION) == "Year")
        {
            int col = COL_YEAR_FIRST;
            int year = m_retirement_year;

            for ( int age = m_retirement_age; age < m_retirement_age + m_retirement_years; age++ )
            {
               if (ui->treeWidget->columnCount() < (col+1))
                {
                    ui->treeWidget->setColumnCount(col+1);
                }

                ui->treeWidget->headerItem()->setText(col, "");

                tl_item->setText(col, QString::number(year));
                ui->treeWidget->setColumnWidth(col, 60);

                ++year;
                ++col;
            }
        }

        if (tl_item->text(COL_DESCRIPTION) == "Age")
        {
            int col = COL_YEAR_FIRST;

            for ( int age = m_retirement_age; age < m_retirement_age + m_retirement_years; age++ )
            {
                tl_item->setText(col, QString::number(age));
                set_column_alignment(col, ITEM_ALIGNMENT);

                ++col;
            }
        }
    }
}


void MainWindow::calculate_expense_row(QTreeWidgetItem* item)
{
    double inflation = (item->text(COL_INFLATION).toDouble() / 100.0) + 1.0;

    for ( int col = (COL_YEAR_FIRST + 1); col < ui->treeWidget->columnCount(); col++)
    {
        if (item->background(col) != COLOR_EDITED)
        {
            double expense = item->text(col - 1).toDouble();
            expense *= inflation;

            item->setText(col, QString::number((int) (expense + 0.5)));
        }
    }
}


void MainWindow::calculate_expense_rows()
{
    int num_tl_items = ui->treeWidget->topLevelItemCount();
    for ( int ii = 0; ii < num_tl_items; ii++ )
    {
        QTreeWidgetItem* tl_item = ui->treeWidget->topLevelItem(ii);

        if (tl_item->text(COL_DESCRIPTION).contains("BASIC"))
        {
            // BASIC LIVING EXPENSES have extra child level
            for ( int jj = 0; jj < tl_item->childCount(); jj++ )
            {
                QTreeWidgetItem* child = tl_item->child( jj );

                for ( int kk = 0; kk < child->childCount(); kk++ )
                {
                    QTreeWidgetItem* item = child->child( kk );
                    calculate_expense_row(item);
                }
            }
        }

        else if (tl_item->text(COL_DESCRIPTION).contains("DISCRETIONARY"))
        {
            for ( int jj = 0; jj < tl_item->childCount(); jj++ )
            {
                QTreeWidgetItem* item = tl_item->child( jj );
                calculate_expense_row(item);
            }
        }

        else if (tl_item->text(COL_DESCRIPTION) == "SECURE INCOME")
        {
            for ( int jj = 0; jj < tl_item->childCount(); jj++ )
            {
                QTreeWidgetItem* item = tl_item->child( jj );
                calculate_expense_row(item);
            }
        }

        else if (tl_item->text(COL_DESCRIPTION) == "SUPPLEMENTAL INCOME")
        {
            calculate_expense_row(tl_item);
        }
    }
}


void MainWindow::calculate_subtotals()
{
    int column_count = 0;

    int num_tl_items = ui->treeWidget->topLevelItemCount();
    for ( int ii = 0; ii < num_tl_items; ii++ )
    {
        QTreeWidgetItem* tl_item = ui->treeWidget->topLevelItem(ii);
        column_count = tl_item->columnCount();

        // BASIC LIVING EXPENSES have extra child level
        if (tl_item->text(COL_DESCRIPTION).contains("BASIC"))
        {
            for ( int col = COL_YEAR_FIRST; col < column_count; col++ )
            {
                double tl_subtotal = 0.0;

                for ( int jj = 0; jj < tl_item->childCount(); jj++ )
                {
                    QTreeWidgetItem* item = tl_item->child( jj );    // Food, Utilities, etc.

                    double subtotal = 0.0;

                    for ( int kk = 0; kk < item->childCount(); kk++)
                    {
                        QTreeWidgetItem* subitem = item->child( kk );     // Groceries, Restaurants, etc.
                        subtotal += subitem->text(col).toDouble();
                    }

                    item->setText(col, QString::number((int) (subtotal + 0.5)));

                    // set subtotal to BOLD font
                    QFont font = item->font(col);
                    font.setBold(true);
                    item->setFont(col, font);

                    tl_subtotal += subtotal;
                }

                tl_item->setText(col, QString::number(tl_subtotal));

                QFont font = tl_item->font(col);
                font.setBold(true);
                tl_item->setFont(col, font);
            }
        }

        else if (tl_item->text(COL_DESCRIPTION).contains("DISCRETIONARY"))
        {
            for ( int col = COL_YEAR_FIRST; col < column_count; col++ )
            {
                double subtotal = 0.0;

                for ( int jj = 0; jj < tl_item->childCount(); jj++ )
                {
                    QTreeWidgetItem* item = tl_item->child( jj );
                    subtotal += item->text(col).toDouble();
                }

                tl_item->setText(col, QString::number((int) (subtotal + 0.5)));

                // set subtotal to BOLD font
                QFont font = tl_item->font(col);
                font.setBold(true);
                tl_item->setFont(col, font);
            }
        }

        else if (tl_item->text(COL_DESCRIPTION).contains("SECURE INCOME"))
        {
            for ( int col = COL_YEAR_FIRST; col < column_count; col++ )
            {
                double subtotal = 0.0;

                for ( int jj = 0; jj < tl_item->childCount(); jj++ )
                {
                    QTreeWidgetItem* item = tl_item->child( jj );
                    subtotal += item->text(col).toDouble();
                }

                tl_item->setText(col, QString::number((int) (subtotal + 0.5)));

                // set subtotal to BOLD font
                QFont font = tl_item->font(col);
                font.setBold(true);
                tl_item->setFont(col, font);
            }
        }
    }

    // compute income tax and monthly expense totals
    for ( int col = COL_YEAR_FIRST; col < column_count; col++ )
    {
        double subtotal = 0.0;
        double tax = 0.0;

        for ( int ii = 0; ii < num_tl_items; ii++ )
        {
            QTreeWidgetItem* tl_item = ui->treeWidget->topLevelItem(ii);


            if ((tl_item->text(COL_DESCRIPTION).contains("BASIC")) ||
                (tl_item->text(COL_DESCRIPTION).contains("DISCRETIONARY")))
            {
                subtotal += tl_item->text(col).toDouble();
            }

            else if (tl_item->text(COL_DESCRIPTION).contains("INCOME TAX"))
            {
                tax = subtotal * (ui->lineEdit_taxrate->text().toDouble() / 100.0);
                tl_item->setText(col, QString::number((int) (tax + 0.5)));

                // set to BOLD font
                QFont font = tl_item->font(col);
                font.setBold(true);
                tl_item->setFont(col, font);
            }

            else if (tl_item->text(COL_DESCRIPTION).contains("TOTAL MONTHLY"))
            {
                subtotal += tax;
                tl_item->setText(col, QString::number((int) (subtotal + 0.5)));

                // set to BOLD font
                QFont font = tl_item->font(col);
                font.setBold(true);
                tl_item->setFont(col, font);
            }

            else if (tl_item->text(COL_DESCRIPTION).contains("TOTAL ANNUAL"))
            {
                subtotal *= 12.0;
                tl_item->setText(col, QString::number((int) (subtotal + 0.5)));

                // set to BOLD font
                QFont font = tl_item->font(col);
                font.setBold(true);
                tl_item->setFont(col, font);
            }
        }
    }

    // compute required IRA income
    for ( int col = COL_YEAR_FIRST; col < column_count; col++ )
    {
        double subtotal = 0.0;

        for ( int ii = 0; ii < num_tl_items; ii++ )
        {
            QTreeWidgetItem* tl_item = ui->treeWidget->topLevelItem(ii);


            if (tl_item->text(COL_DESCRIPTION).contains("TOTAL MONTHLY EXPENSES"))
            {
                subtotal += tl_item->text(col).toDouble();
            }

            else if (tl_item->text(COL_DESCRIPTION).contains("SECURE INCOME"))
            {
                subtotal -= tl_item->text(col).toDouble();
            }

            else if (tl_item->text(COL_DESCRIPTION).contains("SUPPLEMENTAL INCOME"))
            {
                subtotal -= tl_item->text(col).toDouble();
            }

            else if (tl_item->text(COL_DESCRIPTION).contains("REQD MONTHLY IRA INCOME"))
            {
                tl_item->setText(col, QString::number((int) subtotal));
            }

            else if (tl_item->text(COL_DESCRIPTION).contains("REQD ANNUAL IRA INCOME"))
            {
                tl_item->setText(col, QString::number((int) (subtotal * 12.0)));
            }
        }
    }
}



void MainWindow::color_row(QTreeWidgetItem* item, QColor color)
{
    for ( int col = 0; col < ui->treeWidget->columnCount(); col++)
    {
        if (item->background(col) != COLOR_EDITED)
        {
            if ((col == COL_INFLATION) && (item->text(col).length() > 0))
                item->setBackground(col, COLOR_INFLATION);

            else if ((col == COL_YEAR_FIRST) && (item->text(col).length() > 0))
                item->setBackground(col, COLOR_YEAR_FIRST);

            else
                item->setBackground(col, color);
        }

        item->setForeground(col, QColor("black"));
    }
}



void MainWindow::color_rows()
{
    int num_tl_items = ui->treeWidget->topLevelItemCount();
    for ( int ii = 0; ii < num_tl_items; ii++ )
    {
        QTreeWidgetItem* tl_item = ui->treeWidget->topLevelItem(ii);

        // BASIC LIVING EXPENSES have extra child level
        if (tl_item->text(COL_DESCRIPTION).contains("BASIC"))
        {
            for ( int jj = 0; jj < tl_item->childCount(); jj++ )
            {
                QTreeWidgetItem* child = tl_item->child( jj );
                QColor color;

                if (child->text(COL_DESCRIPTION).contains("Food"))
                    color = COLOR_FOOD;
                else if (child->text(COL_DESCRIPTION).contains("Utilities"))
                    color = COLOR_UTILITIES;
                else if (child->text(COL_DESCRIPTION).contains("Transport"))
                    color = COLOR_TRANSPORT;
                else if (child->text(COL_DESCRIPTION).contains("Housing"))
                    color = COLOR_HOUSING;
                else if (child->text(COL_DESCRIPTION).contains("Health"))
                    color = COLOR_HC;

                color_row(child, color);

                for ( int kk = 0; kk < child->childCount(); kk++ )
                {
                    QTreeWidgetItem* item = child->child( kk );
                    color_row(item, color);
                }
            }
        }

        else if (tl_item->text(COL_DESCRIPTION).contains("DISCRETIONARY"))
        {
            for ( int jj = 0; jj < tl_item->childCount(); jj++ )
            {
                QTreeWidgetItem* child = tl_item->child( jj );
                color_row(child, COLOR_DISCRETIONARY);
            }
        }

        else if (tl_item->text(COL_DESCRIPTION) == "SECURE INCOME")
        {
            for ( int jj = 0; jj < tl_item->childCount(); jj++ )
            {
                QTreeWidgetItem* child = tl_item->child( jj );
                color_row(child, COLOR_INCOME);
            }
        }

        else if (tl_item->text(COL_DESCRIPTION) == "SUPPLEMENTAL INCOME")
        {
            color_row(tl_item, COLOR_INCOME);
        }
    }
}


QTreeWidgetItem* double_click_item = NULL;
int double_click_column = 0;

void MainWindow::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    if (column < COL_INFLATION)
        return;

    if (item->childCount() > 0)
        return;

    double_click_item = item;
    double_click_column = column;

    QLineEdit* lineEdit = new QLineEdit(this);
    lineEdit->setText(QStringLiteral(""));
    lineEdit->setFixedHeight(10);
    lineEdit->setFrame(false);

    connect(lineEdit, SIGNAL(editingFinished()), this, SLOT(slotFinishEdit()));
    connect(lineEdit, SIGNAL(keyPress()), this, SLOT(on_keyPressEvent(QKeyEvent *event)));

    ui->treeWidget->setItemWidget(item, column, lineEdit);
}


//Slot function-edit completed
void MainWindow::slotFinishEdit()
{
    if (double_click_item != nullptr)
    {
        QLineEdit *edit = qobject_cast<QLineEdit*>(ui->treeWidget->itemWidget(double_click_item, double_click_column));
        if (!edit)
        {
            return;
        }

        QString text = edit->text();

        // ensure proper formatting
        double val = text.toDouble();
        if (double_click_column == COL_INFLATION)
        {
            text = QString::number(val, 'f', 1);
        }
        else
        {
            text = QString::number((int) (val + 0.5));
        }

        ui->treeWidget->removeItemWidget(double_click_item, double_click_column);
        double_click_item->setText(double_click_column, text);
        double_click_item->setTextAlignment( double_click_column, ITEM_ALIGNMENT );
        double_click_item->setBackground(double_click_column, COLOR_EDITED);

        double_click_item->setSelected(false);

        recalc_expenses();
    }
}



void MainWindow::on_actionRevert_to_Formula_triggered()
{
    QTreeWidgetItem* item = ui->treeWidget->selectedItems().at(0);
    int col = ui->treeWidget->currentColumn();

    double inflation = (item->text(COL_INFLATION).toDouble() / 100.0) + 1.0;
    double expense = item->text(col - 1).toDouble();
    expense *= inflation;

    item->setText(col, QString::number((int) (expense + 0.5)));

    // set BG color to something other that COLOR_EDITED
    item->setBackground(col, Qt::white);

    recalc_expenses();
}


void MainWindow::on_actionCollapse_All_triggered()
{
    ui->treeWidget->collapseAll();
}


void MainWindow::on_actionExpand_All_triggered()
{
    ui->treeWidget->expandAll();
}


void MainWindow::on_actionCollapse_Categories_triggered()
{
    ui->treeWidget->collapseAll();

    int num_tl_items = ui->treeWidget->topLevelItemCount();
    for ( int ii = 0; ii < num_tl_items; ii++ )
    {
        QTreeWidgetItem* tl_item = ui->treeWidget->topLevelItem(ii);

        if ((tl_item->text(COL_DESCRIPTION).contains("BASIC")) ||
            (tl_item->text(COL_DESCRIPTION) == "INCOME") ||
            (tl_item->text(COL_DESCRIPTION) == "SECURE INCOME"))
        {
            ui->treeWidget->expandItem(tl_item);
        }
    }
}

