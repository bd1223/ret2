/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRevert_to_Formula;
    QAction *actionExpand_All;
    QAction *actionCollapse_All;
    QAction *actionCollapse_Categories;
    QAction *actionSave;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_readme;
    QWidget *tab_data;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QLineEdit *lineEdit_ret_age;
    QLabel *label_11;
    QLineEdit *lineEdit_curr_age;
    QLabel *label;
    QLineEdit *lineEdit_ret_years;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_taxrate;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_ira_balance;
    QLabel *label_4;
    QLineEdit *lineEdit_annuity_income;
    QLabel *label_5;
    QLineEdit *lineEdit_pension_income;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_annuity_start_age;
    QLineEdit *lineEdit_pension_start_age;
    QLabel *label_8;
    QLineEdit *lineEdit_ss_income;
    QLabel *label_9;
    QLineEdit *lineEdit_ss_start_age;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *tab_expenses;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    QWidget *tab_analysis;
    QWidget *tab_about;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *msgs;
    QMenuBar *menubar;
    QMenu *menuView;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1189, 586);
        actionRevert_to_Formula = new QAction(MainWindow);
        actionRevert_to_Formula->setObjectName("actionRevert_to_Formula");
        actionRevert_to_Formula->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        actionExpand_All = new QAction(MainWindow);
        actionExpand_All->setObjectName("actionExpand_All");
        actionCollapse_All = new QAction(MainWindow);
        actionCollapse_All->setObjectName("actionCollapse_All");
        actionCollapse_Categories = new QAction(MainWindow);
        actionCollapse_Categories->setObjectName("actionCollapse_Categories");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QFont font;
        font.setPointSize(10);
        tabWidget->setFont(font);
        tab_readme = new QWidget();
        tab_readme->setObjectName("tab_readme");
        tabWidget->addTab(tab_readme, QString());
        tab_data = new QWidget();
        tab_data->setObjectName("tab_data");
        formLayoutWidget_2 = new QWidget(tab_data);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(20, 40, 191, 86));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setVerticalSpacing(0);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName("label_10");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        lineEdit_ret_age = new QLineEdit(formLayoutWidget_2);
        lineEdit_ret_age->setObjectName("lineEdit_ret_age");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_ret_age);

        label_11 = new QLabel(formLayoutWidget_2);
        label_11->setObjectName("label_11");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_11);

        lineEdit_curr_age = new QLineEdit(formLayoutWidget_2);
        lineEdit_curr_age->setObjectName("lineEdit_curr_age");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_curr_age);

        label = new QLabel(formLayoutWidget_2);
        label->setObjectName("label");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label);

        lineEdit_ret_years = new QLineEdit(formLayoutWidget_2);
        lineEdit_ret_years->setObjectName("lineEdit_ret_years");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_ret_years);

        formLayoutWidget = new QWidget(tab_data);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 160, 191, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_taxrate = new QLineEdit(formLayoutWidget);
        lineEdit_taxrate->setObjectName("lineEdit_taxrate");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_taxrate);

        formLayoutWidget_3 = new QWidget(tab_data);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(270, 40, 241, 185));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setVerticalSpacing(0);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget_3);
        label_3->setObjectName("label_3");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit_ira_balance = new QLineEdit(formLayoutWidget_3);
        lineEdit_ira_balance->setObjectName("lineEdit_ira_balance");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_ira_balance);

        label_4 = new QLabel(formLayoutWidget_3);
        label_4->setObjectName("label_4");

        formLayout_3->setWidget(8, QFormLayout::LabelRole, label_4);

        lineEdit_annuity_income = new QLineEdit(formLayoutWidget_3);
        lineEdit_annuity_income->setObjectName("lineEdit_annuity_income");

        formLayout_3->setWidget(8, QFormLayout::FieldRole, lineEdit_annuity_income);

        label_5 = new QLabel(formLayoutWidget_3);
        label_5->setObjectName("label_5");

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_5);

        lineEdit_pension_income = new QLineEdit(formLayoutWidget_3);
        lineEdit_pension_income->setObjectName("lineEdit_pension_income");

        formLayout_3->setWidget(5, QFormLayout::FieldRole, lineEdit_pension_income);

        label_6 = new QLabel(formLayoutWidget_3);
        label_6->setObjectName("label_6");

        formLayout_3->setWidget(6, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget_3);
        label_7->setObjectName("label_7");

        formLayout_3->setWidget(9, QFormLayout::LabelRole, label_7);

        lineEdit_annuity_start_age = new QLineEdit(formLayoutWidget_3);
        lineEdit_annuity_start_age->setObjectName("lineEdit_annuity_start_age");

        formLayout_3->setWidget(9, QFormLayout::FieldRole, lineEdit_annuity_start_age);

        lineEdit_pension_start_age = new QLineEdit(formLayoutWidget_3);
        lineEdit_pension_start_age->setObjectName("lineEdit_pension_start_age");

        formLayout_3->setWidget(6, QFormLayout::FieldRole, lineEdit_pension_start_age);

        label_8 = new QLabel(formLayoutWidget_3);
        label_8->setObjectName("label_8");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_8);

        lineEdit_ss_income = new QLineEdit(formLayoutWidget_3);
        lineEdit_ss_income->setObjectName("lineEdit_ss_income");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEdit_ss_income);

        label_9 = new QLabel(formLayoutWidget_3);
        label_9->setObjectName("label_9");

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_9);

        lineEdit_ss_start_age = new QLineEdit(formLayoutWidget_3);
        lineEdit_ss_start_age->setObjectName("lineEdit_ss_start_age");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, lineEdit_ss_start_age);

        label_12 = new QLabel(formLayoutWidget_3);
        label_12->setObjectName("label_12");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(formLayoutWidget_3);
        label_13->setObjectName("label_13");

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_13);

        label_14 = new QLabel(formLayoutWidget_3);
        label_14->setObjectName("label_14");

        formLayout_3->setWidget(7, QFormLayout::LabelRole, label_14);

        tabWidget->addTab(tab_data, QString());
        tab_expenses = new QWidget();
        tab_expenses->setObjectName("tab_expenses");
        verticalLayout_2 = new QVBoxLayout(tab_expenses);
        verticalLayout_2->setObjectName("verticalLayout_2");
        splitter = new QSplitter(tab_expenses);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Vertical);
        treeWidget = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignCenter);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QFont font1;
        font1.setBold(true);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem2->setFont(0, font1);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem3->setFont(0, font1);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem4->setFont(0, font1);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem5->setFont(0, font1);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem6->setFont(0, font1);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem7);
        new QTreeWidgetItem(__qtreewidgetitem7);
        new QTreeWidgetItem(__qtreewidgetitem7);
        new QTreeWidgetItem(__qtreewidgetitem7);
        new QTreeWidgetItem(__qtreewidgetitem7);
        new QTreeWidgetItem(__qtreewidgetitem7);
        new QTreeWidgetItem(__qtreewidgetitem7);
        new QTreeWidgetItem(__qtreewidgetitem7);
        new QTreeWidgetItem(__qtreewidgetitem7);
        new QTreeWidgetItem(__qtreewidgetitem7);
        new QTreeWidgetItem(__qtreewidgetitem7);
        new QTreeWidgetItem(__qtreewidgetitem7);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem8);
        new QTreeWidgetItem(__qtreewidgetitem8);
        new QTreeWidgetItem(__qtreewidgetitem8);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setContextMenuPolicy(Qt::ContextMenuPolicy::ActionsContextMenu);
        treeWidget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectItems);
        splitter->addWidget(treeWidget);

        verticalLayout_2->addWidget(splitter);

        tabWidget->addTab(tab_expenses, QString());
        tab_analysis = new QWidget();
        tab_analysis->setObjectName("tab_analysis");
        tabWidget->addTab(tab_analysis, QString());
        tab_about = new QWidget();
        tab_about->setObjectName("tab_about");
        tabWidget->addTab(tab_about, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        msgs = new QTextEdit(tab);
        msgs->setObjectName("msgs");
        msgs->setReadOnly(true);

        verticalLayout_3->addWidget(msgs);

        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1189, 37));
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menuView->addAction(actionExpand_All);
        menuView->addAction(actionCollapse_All);
        menuView->addAction(actionCollapse_Categories);
        menuFile->addAction(actionSave);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionRevert_to_Formula->setText(QCoreApplication::translate("MainWindow", "Revert to Formula", nullptr));
        actionExpand_All->setText(QCoreApplication::translate("MainWindow", "Expand All", nullptr));
        actionCollapse_All->setText(QCoreApplication::translate("MainWindow", "Collapse All", nullptr));
        actionCollapse_Categories->setText(QCoreApplication::translate("MainWindow", "Collapse Categories", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save ...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_readme), QCoreApplication::translate("MainWindow", "Intro", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Retirement Age:", nullptr));
        lineEdit_ret_age->setText(QCoreApplication::translate("MainWindow", "65", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Current Age:", nullptr));
        lineEdit_curr_age->setText(QCoreApplication::translate("MainWindow", "65", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Retirement Years:", nullptr));
        lineEdit_ret_years->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Effective Income Tax Rate (%):", nullptr));
        lineEdit_taxrate->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "IRA Balance at Retirement:", nullptr));
        lineEdit_ira_balance->setText(QCoreApplication::translate("MainWindow", "1000000", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Annuity Income (Annual):", nullptr));
        lineEdit_annuity_income->setText(QCoreApplication::translate("MainWindow", "20000", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Pension Income (Annual):", nullptr));
        lineEdit_pension_income->setText(QCoreApplication::translate("MainWindow", "12000", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Pension Start Age:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Annuity Start Age:", nullptr));
        lineEdit_annuity_start_age->setText(QCoreApplication::translate("MainWindow", "68", nullptr));
        lineEdit_pension_start_age->setText(QCoreApplication::translate("MainWindow", "65", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Social Security Income (Annual):", nullptr));
        lineEdit_ss_income->setText(QCoreApplication::translate("MainWindow", "50000", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Starting Social Security Age:", nullptr));
        lineEdit_ss_start_age->setText(QCoreApplication::translate("MainWindow", "67", nullptr));
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_data), QCoreApplication::translate("MainWindow", "Data", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("MainWindow", "Monthly", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "Infl (%)", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Expense", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "Year", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "Age", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("MainWindow", "BASIC LIVING EXPENSES", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("MainWindow", "Food", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(2, QCoreApplication::translate("MainWindow", "700", nullptr));
        ___qtreewidgetitem5->setText(1, QCoreApplication::translate("MainWindow", "4.0", nullptr));
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("MainWindow", "Groceries", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem4->child(1);
        ___qtreewidgetitem6->setText(2, QCoreApplication::translate("MainWindow", "300", nullptr));
        ___qtreewidgetitem6->setText(1, QCoreApplication::translate("MainWindow", "4.0", nullptr));
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("MainWindow", "Restaurants", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem4->child(2);
        ___qtreewidgetitem7->setText(2, QCoreApplication::translate("MainWindow", "0", nullptr));
        ___qtreewidgetitem7->setText(1, QCoreApplication::translate("MainWindow", "4.0", nullptr));
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("MainWindow", "Other Food", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem3->child(1);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("MainWindow", "Utilities", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(2, QCoreApplication::translate("MainWindow", "245", nullptr));
        ___qtreewidgetitem9->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("MainWindow", "Utilities", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem8->child(1);
        ___qtreewidgetitem10->setText(2, QCoreApplication::translate("MainWindow", "175", nullptr));
        ___qtreewidgetitem10->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("MainWindow", "Internet / TV", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem8->child(2);
        ___qtreewidgetitem11->setText(2, QCoreApplication::translate("MainWindow", "70", nullptr));
        ___qtreewidgetitem11->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("MainWindow", "Phone", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem8->child(3);
        ___qtreewidgetitem12->setText(2, QCoreApplication::translate("MainWindow", "35", nullptr));
        ___qtreewidgetitem12->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("MainWindow", "Sec System", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem8->child(4);
        ___qtreewidgetitem13->setText(2, QCoreApplication::translate("MainWindow", "0", nullptr));
        ___qtreewidgetitem13->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem13->setText(0, QCoreApplication::translate("MainWindow", "Other Utilities", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem3->child(2);
        ___qtreewidgetitem14->setText(0, QCoreApplication::translate("MainWindow", "Transportation", nullptr));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem14->child(0);
        ___qtreewidgetitem15->setText(2, QCoreApplication::translate("MainWindow", "700", nullptr));
        ___qtreewidgetitem15->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem15->setText(0, QCoreApplication::translate("MainWindow", "Car Payment", nullptr));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem14->child(1);
        ___qtreewidgetitem16->setText(2, QCoreApplication::translate("MainWindow", "500", nullptr));
        ___qtreewidgetitem16->setText(1, QCoreApplication::translate("MainWindow", "5.0", nullptr));
        ___qtreewidgetitem16->setText(0, QCoreApplication::translate("MainWindow", "Car Insurance", nullptr));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem14->child(2);
        ___qtreewidgetitem17->setText(2, QCoreApplication::translate("MainWindow", "100", nullptr));
        ___qtreewidgetitem17->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem17->setText(0, QCoreApplication::translate("MainWindow", "Car Maintenance", nullptr));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem14->child(3);
        ___qtreewidgetitem18->setText(2, QCoreApplication::translate("MainWindow", "175", nullptr));
        ___qtreewidgetitem18->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem18->setText(0, QCoreApplication::translate("MainWindow", "Gasoline", nullptr));
        QTreeWidgetItem *___qtreewidgetitem19 = ___qtreewidgetitem14->child(4);
        ___qtreewidgetitem19->setText(2, QCoreApplication::translate("MainWindow", "0", nullptr));
        ___qtreewidgetitem19->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem19->setText(0, QCoreApplication::translate("MainWindow", "Other Transport", nullptr));
        QTreeWidgetItem *___qtreewidgetitem20 = ___qtreewidgetitem3->child(3);
        ___qtreewidgetitem20->setText(0, QCoreApplication::translate("MainWindow", "Housing", nullptr));
        QTreeWidgetItem *___qtreewidgetitem21 = ___qtreewidgetitem20->child(0);
        ___qtreewidgetitem21->setText(2, QCoreApplication::translate("MainWindow", "0", nullptr));
        ___qtreewidgetitem21->setText(1, QCoreApplication::translate("MainWindow", "0.0", nullptr));
        ___qtreewidgetitem21->setText(0, QCoreApplication::translate("MainWindow", "Mortgage / Rent", nullptr));
        QTreeWidgetItem *___qtreewidgetitem22 = ___qtreewidgetitem20->child(1);
        ___qtreewidgetitem22->setText(2, QCoreApplication::translate("MainWindow", "0", nullptr));
        ___qtreewidgetitem22->setText(1, QCoreApplication::translate("MainWindow", "0.0", nullptr));
        ___qtreewidgetitem22->setText(0, QCoreApplication::translate("MainWindow", "HELOC", nullptr));
        QTreeWidgetItem *___qtreewidgetitem23 = ___qtreewidgetitem20->child(2);
        ___qtreewidgetitem23->setText(2, QCoreApplication::translate("MainWindow", "125", nullptr));
        ___qtreewidgetitem23->setText(1, QCoreApplication::translate("MainWindow", "3.5", nullptr));
        ___qtreewidgetitem23->setText(0, QCoreApplication::translate("MainWindow", "Home Insurance", nullptr));
        QTreeWidgetItem *___qtreewidgetitem24 = ___qtreewidgetitem20->child(3);
        ___qtreewidgetitem24->setText(2, QCoreApplication::translate("MainWindow", "155", nullptr));
        ___qtreewidgetitem24->setText(1, QCoreApplication::translate("MainWindow", "2.0", nullptr));
        ___qtreewidgetitem24->setText(0, QCoreApplication::translate("MainWindow", "Property Tax", nullptr));
        QTreeWidgetItem *___qtreewidgetitem25 = ___qtreewidgetitem20->child(4);
        ___qtreewidgetitem25->setText(2, QCoreApplication::translate("MainWindow", "375", nullptr));
        ___qtreewidgetitem25->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem25->setText(0, QCoreApplication::translate("MainWindow", "HOA Fees", nullptr));
        QTreeWidgetItem *___qtreewidgetitem26 = ___qtreewidgetitem20->child(5);
        ___qtreewidgetitem26->setText(2, QCoreApplication::translate("MainWindow", "350", nullptr));
        ___qtreewidgetitem26->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem26->setText(0, QCoreApplication::translate("MainWindow", "Home Maintenance", nullptr));
        QTreeWidgetItem *___qtreewidgetitem27 = ___qtreewidgetitem20->child(6);
        ___qtreewidgetitem27->setText(2, QCoreApplication::translate("MainWindow", "0", nullptr));
        ___qtreewidgetitem27->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem27->setText(0, QCoreApplication::translate("MainWindow", "Other Housing", nullptr));
        QTreeWidgetItem *___qtreewidgetitem28 = ___qtreewidgetitem3->child(4);
        ___qtreewidgetitem28->setText(0, QCoreApplication::translate("MainWindow", "Healthcare", nullptr));
        QTreeWidgetItem *___qtreewidgetitem29 = ___qtreewidgetitem28->child(0);
        ___qtreewidgetitem29->setText(2, QCoreApplication::translate("MainWindow", "370", nullptr));
        ___qtreewidgetitem29->setText(1, QCoreApplication::translate("MainWindow", "6.0", nullptr));
        ___qtreewidgetitem29->setText(0, QCoreApplication::translate("MainWindow", "Medicare Part B", nullptr));
        QTreeWidgetItem *___qtreewidgetitem30 = ___qtreewidgetitem28->child(1);
        ___qtreewidgetitem30->setText(2, QCoreApplication::translate("MainWindow", "60", nullptr));
        ___qtreewidgetitem30->setText(1, QCoreApplication::translate("MainWindow", "6.0", nullptr));
        ___qtreewidgetitem30->setText(0, QCoreApplication::translate("MainWindow", "Medicare Part D", nullptr));
        QTreeWidgetItem *___qtreewidgetitem31 = ___qtreewidgetitem28->child(2);
        ___qtreewidgetitem31->setText(2, QCoreApplication::translate("MainWindow", "270", nullptr));
        ___qtreewidgetitem31->setText(1, QCoreApplication::translate("MainWindow", "6.0", nullptr));
        ___qtreewidgetitem31->setText(0, QCoreApplication::translate("MainWindow", "Medicare Supplement", nullptr));
        QTreeWidgetItem *___qtreewidgetitem32 = ___qtreewidgetitem28->child(3);
        ___qtreewidgetitem32->setText(2, QCoreApplication::translate("MainWindow", "100", nullptr));
        ___qtreewidgetitem32->setText(1, QCoreApplication::translate("MainWindow", "5.5", nullptr));
        ___qtreewidgetitem32->setText(0, QCoreApplication::translate("MainWindow", "Dental / Vision Ins", nullptr));
        QTreeWidgetItem *___qtreewidgetitem33 = ___qtreewidgetitem28->child(4);
        ___qtreewidgetitem33->setText(2, QCoreApplication::translate("MainWindow", "200", nullptr));
        ___qtreewidgetitem33->setText(1, QCoreApplication::translate("MainWindow", "5.5", nullptr));
        ___qtreewidgetitem33->setText(0, QCoreApplication::translate("MainWindow", "Out of Pocket", nullptr));
        QTreeWidgetItem *___qtreewidgetitem34 = ___qtreewidgetitem28->child(5);
        ___qtreewidgetitem34->setText(2, QCoreApplication::translate("MainWindow", "275", nullptr));
        ___qtreewidgetitem34->setText(1, QCoreApplication::translate("MainWindow", "5.0", nullptr));
        ___qtreewidgetitem34->setText(0, QCoreApplication::translate("MainWindow", "LTC Insurance", nullptr));
        QTreeWidgetItem *___qtreewidgetitem35 = ___qtreewidgetitem28->child(6);
        ___qtreewidgetitem35->setText(2, QCoreApplication::translate("MainWindow", "0", nullptr));
        ___qtreewidgetitem35->setText(1, QCoreApplication::translate("MainWindow", "5.0", nullptr));
        ___qtreewidgetitem35->setText(0, QCoreApplication::translate("MainWindow", "Other Healthcare", nullptr));
        QTreeWidgetItem *___qtreewidgetitem36 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem36->setText(0, QCoreApplication::translate("MainWindow", "DISCRETIONARY EXPENSES", nullptr));
        QTreeWidgetItem *___qtreewidgetitem37 = ___qtreewidgetitem36->child(0);
        ___qtreewidgetitem37->setText(2, QCoreApplication::translate("MainWindow", "1000", nullptr));
        ___qtreewidgetitem37->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem37->setText(0, QCoreApplication::translate("MainWindow", "Travel", nullptr));
        QTreeWidgetItem *___qtreewidgetitem38 = ___qtreewidgetitem36->child(1);
        ___qtreewidgetitem38->setText(2, QCoreApplication::translate("MainWindow", "0", nullptr));
        ___qtreewidgetitem38->setText(1, QCoreApplication::translate("MainWindow", "0.0", nullptr));
        ___qtreewidgetitem38->setText(0, QCoreApplication::translate("MainWindow", "Debt Payoff", nullptr));
        QTreeWidgetItem *___qtreewidgetitem39 = ___qtreewidgetitem36->child(2);
        ___qtreewidgetitem39->setText(2, QCoreApplication::translate("MainWindow", "175", nullptr));
        ___qtreewidgetitem39->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem39->setText(0, QCoreApplication::translate("MainWindow", "Personal Care", nullptr));
        QTreeWidgetItem *___qtreewidgetitem40 = ___qtreewidgetitem36->child(3);
        ___qtreewidgetitem40->setText(2, QCoreApplication::translate("MainWindow", "125", nullptr));
        ___qtreewidgetitem40->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem40->setText(0, QCoreApplication::translate("MainWindow", "Pets", nullptr));
        QTreeWidgetItem *___qtreewidgetitem41 = ___qtreewidgetitem36->child(4);
        ___qtreewidgetitem41->setText(2, QCoreApplication::translate("MainWindow", "75", nullptr));
        ___qtreewidgetitem41->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem41->setText(0, QCoreApplication::translate("MainWindow", "Clothing", nullptr));
        QTreeWidgetItem *___qtreewidgetitem42 = ___qtreewidgetitem36->child(5);
        ___qtreewidgetitem42->setText(2, QCoreApplication::translate("MainWindow", "200", nullptr));
        ___qtreewidgetitem42->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem42->setText(0, QCoreApplication::translate("MainWindow", "Gifts", nullptr));
        QTreeWidgetItem *___qtreewidgetitem43 = ___qtreewidgetitem36->child(6);
        ___qtreewidgetitem43->setText(2, QCoreApplication::translate("MainWindow", "25", nullptr));
        ___qtreewidgetitem43->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem43->setText(0, QCoreApplication::translate("MainWindow", "Legal / Tax Prep", nullptr));
        QTreeWidgetItem *___qtreewidgetitem44 = ___qtreewidgetitem36->child(7);
        ___qtreewidgetitem44->setText(2, QCoreApplication::translate("MainWindow", "200", nullptr));
        ___qtreewidgetitem44->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem44->setText(0, QCoreApplication::translate("MainWindow", "Hobbies", nullptr));
        QTreeWidgetItem *___qtreewidgetitem45 = ___qtreewidgetitem36->child(8);
        ___qtreewidgetitem45->setText(2, QCoreApplication::translate("MainWindow", "1000", nullptr));
        ___qtreewidgetitem45->setText(1, QCoreApplication::translate("MainWindow", "3.0", nullptr));
        ___qtreewidgetitem45->setText(0, QCoreApplication::translate("MainWindow", "Misc", nullptr));
        QTreeWidgetItem *___qtreewidgetitem46 = ___qtreewidgetitem36->child(9);
        ___qtreewidgetitem46->setText(2, QCoreApplication::translate("MainWindow", "0", nullptr));
        ___qtreewidgetitem46->setText(1, QCoreApplication::translate("MainWindow", "0.0", nullptr));
        ___qtreewidgetitem46->setText(0, QCoreApplication::translate("MainWindow", "SURPRISE!", nullptr));
        QTreeWidgetItem *___qtreewidgetitem47 = ___qtreewidgetitem36->child(10);
        ___qtreewidgetitem47->setText(2, QCoreApplication::translate("MainWindow", "500", nullptr));
        ___qtreewidgetitem47->setText(1, QCoreApplication::translate("MainWindow", "0.0", nullptr));
        ___qtreewidgetitem47->setText(0, QCoreApplication::translate("MainWindow", "Child Support", nullptr));
        QTreeWidgetItem *___qtreewidgetitem48 = ___qtreewidgetitem36->child(11);
        ___qtreewidgetitem48->setText(2, QCoreApplication::translate("MainWindow", "0", nullptr));
        ___qtreewidgetitem48->setText(1, QCoreApplication::translate("MainWindow", "0.0", nullptr));
        ___qtreewidgetitem48->setText(0, QCoreApplication::translate("MainWindow", "Other", nullptr));
        QTreeWidgetItem *___qtreewidgetitem49 = treeWidget->topLevelItem(7);
        ___qtreewidgetitem49->setText(0, QCoreApplication::translate("MainWindow", "INCOME TAX", nullptr));
        QTreeWidgetItem *___qtreewidgetitem50 = treeWidget->topLevelItem(9);
        ___qtreewidgetitem50->setText(0, QCoreApplication::translate("MainWindow", "TOTAL MONTHLY EXPENSES", nullptr));
        QTreeWidgetItem *___qtreewidgetitem51 = treeWidget->topLevelItem(10);
        ___qtreewidgetitem51->setText(0, QCoreApplication::translate("MainWindow", "TOTAL ANNUAL EXPENSES", nullptr));
        QTreeWidgetItem *___qtreewidgetitem52 = treeWidget->topLevelItem(13);
        ___qtreewidgetitem52->setText(0, QCoreApplication::translate("MainWindow", "SECURE INCOME", nullptr));
        QTreeWidgetItem *___qtreewidgetitem53 = ___qtreewidgetitem52->child(0);
        ___qtreewidgetitem53->setText(2, QCoreApplication::translate("MainWindow", "0", nullptr));
        ___qtreewidgetitem53->setText(1, QCoreApplication::translate("MainWindow", "2.1", nullptr));
        ___qtreewidgetitem53->setText(0, QCoreApplication::translate("MainWindow", "Social Security", nullptr));
        QTreeWidgetItem *___qtreewidgetitem54 = ___qtreewidgetitem52->child(1);
        ___qtreewidgetitem54->setText(2, QCoreApplication::translate("MainWindow", "0", nullptr));
        ___qtreewidgetitem54->setText(1, QCoreApplication::translate("MainWindow", "0.0", nullptr));
        ___qtreewidgetitem54->setText(0, QCoreApplication::translate("MainWindow", "Pension", nullptr));
        QTreeWidgetItem *___qtreewidgetitem55 = ___qtreewidgetitem52->child(2);
        ___qtreewidgetitem55->setText(2, QCoreApplication::translate("MainWindow", "0", nullptr));
        ___qtreewidgetitem55->setText(1, QCoreApplication::translate("MainWindow", "0.0", nullptr));
        ___qtreewidgetitem55->setText(0, QCoreApplication::translate("MainWindow", "Annuity", nullptr));
        QTreeWidgetItem *___qtreewidgetitem56 = treeWidget->topLevelItem(14);
        ___qtreewidgetitem56->setText(2, QCoreApplication::translate("MainWindow", "0", nullptr));
        ___qtreewidgetitem56->setText(1, QCoreApplication::translate("MainWindow", "0.0", nullptr));
        ___qtreewidgetitem56->setText(0, QCoreApplication::translate("MainWindow", "OTHER INCOME", nullptr));
        QTreeWidgetItem *___qtreewidgetitem57 = treeWidget->topLevelItem(16);
        ___qtreewidgetitem57->setText(0, QCoreApplication::translate("MainWindow", "REQ'D MONTHLY IRA INCOME", nullptr));
        QTreeWidgetItem *___qtreewidgetitem58 = treeWidget->topLevelItem(17);
        ___qtreewidgetitem58->setText(0, QCoreApplication::translate("MainWindow", "REQ'D ANNUAL IRA INCOME", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_expenses), QCoreApplication::translate("MainWindow", "Expenses", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_analysis), QCoreApplication::translate("MainWindow", "Analysis", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_about), QCoreApplication::translate("MainWindow", "About", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Diagnostics", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
