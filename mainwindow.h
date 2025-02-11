#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDate>
#include <QTreeWidget>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE


#define COL_DESCRIPTION 0
#define COL_INFLATION   1
#define COL_YEAR_FIRST  2

#define COLOR_FOOD           QColorConstants::Svg::lightpink
#define COLOR_UTILITIES      QColorConstants::Svg::paleturquoise
#define COLOR_TRANSPORT      QColorConstants::Svg::whitesmoke
#define COLOR_HOUSING        QColorConstants::Svg::khaki
#define COLOR_HC             QColorConstants::Svg::lemonchiffon
#define COLOR_DISCRETIONARY  QColorConstants::Svg::linen
#define COLOR_INCOME         QColorConstants::Svg::palegreen

#define COLOR_INFLATION      QColorConstants::Svg::lightsalmon
#define COLOR_YEAR_FIRST     QColorConstants::Svg::white
#define COLOR_EDITED         QColorConstants::Svg::yellow

#define ITEM_ALIGNMENT       Qt::AlignRight




class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int m_current_year;
    int m_retirement_year;
    int m_retirement_years;
    int m_current_age;
    int m_retirement_age;

private slots:
    void on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void slotFinishEdit();
    void on_actionRevert_to_Formula_triggered();
    void on_actionCollapse_All_triggered();
    void on_actionExpand_All_triggered();
    void on_actionCollapse_Categories_triggered();

private:
    Ui::MainWindow *ui;

    int  next_expense_row(QTreeWidgetItem* curr_item);
    void set_column_alignment(int column, Qt::Alignment align);
    void populate_years();
    void calculate_expense_row(QTreeWidgetItem* item);
    void calculate_expense_rows();
    void calculate_subtotals();
    void color_row(QTreeWidgetItem* item, QColor color);
    void color_rows();
    void recalc_expenses();

};




#endif // MAINWINDOW_H
