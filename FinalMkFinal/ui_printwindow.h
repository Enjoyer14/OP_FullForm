/********************************************************************************
** Form generated from reading UI file 'printwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTWINDOW_H
#define UI_PRINTWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PrintWindow
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_Add;
    QSpacerItem *verticalSpacer_5;
    QPushButton *btn_deleteSort;
    QPushButton *btn_deleteSearch;
    QSpacerItem *verticalSpacer_6;
    QLabel *label;
    QComboBox *box_type_sort;
    QComboBox *box_direct_sort;
    QPushButton *btn_Sort;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QComboBox *box_type_serach;
    QComboBox *box_direct_search;
    QDateEdit *dateEdit;
    QPushButton *btn_Search;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btn_diagram;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btn_report;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btn_exit;

    void setupUi(QDialog *PrintWindow)
    {
        if (PrintWindow->objectName().isEmpty())
            PrintWindow->setObjectName("PrintWindow");
        PrintWindow->resize(959, 716);
        PrintWindow->setAutoFillBackground(false);
        PrintWindow->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(PrintWindow);
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(PrintWindow);
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        btn_Add = new QPushButton(PrintWindow);
        btn_Add->setObjectName("btn_Add");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(btn_Add->sizePolicy().hasHeightForWidth());
        btn_Add->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(9);
        btn_Add->setFont(font);
        btn_Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(85, 0, 0);\n"
"	selection-background-color: rgb(112, 255, 60);\n"
"	background-color: rgb(215, 207, 227);\n"
"}\n"
"QPushButton::hover{\n"
"	background-color: rgb(82, 170, 11);\n"
"}"));

        verticalLayout->addWidget(btn_Add);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        btn_deleteSort = new QPushButton(PrintWindow);
        btn_deleteSort->setObjectName("btn_deleteSort");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        btn_deleteSort->setFont(font1);
        btn_deleteSort->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(85, 0, 0);\n"
"selection-background-color: rgb(255, 0, 0);\n"
"	background-color: rgb(215, 207, 227);\n"
"}\n"
"QPushButton::hover{\n"
"	background-color: rgb(224, 65, 65);\n"
"}"));

        verticalLayout->addWidget(btn_deleteSort);

        btn_deleteSearch = new QPushButton(PrintWindow);
        btn_deleteSearch->setObjectName("btn_deleteSearch");
        btn_deleteSearch->setFont(font1);
        btn_deleteSearch->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(85, 0, 0);\n"
"selection-background-color: rgb(255, 0, 0);\n"
"	background-color: rgb(215, 207, 227);\n"
"}\n"
"QPushButton::hover{\n"
"	background-color: rgb(224, 65, 65);\n"
"}"));

        verticalLayout->addWidget(btn_deleteSearch);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        label = new QLabel(PrintWindow);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(10);
        font2.setBold(false);
        label->setFont(font2);

        verticalLayout->addWidget(label);

        box_type_sort = new QComboBox(PrintWindow);
        box_type_sort->addItem(QString());
        box_type_sort->addItem(QString());
        box_type_sort->addItem(QString());
        box_type_sort->addItem(QString());
        box_type_sort->setObjectName("box_type_sort");
        box_type_sort->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(box_type_sort);

        box_direct_sort = new QComboBox(PrintWindow);
        box_direct_sort->addItem(QString());
        box_direct_sort->addItem(QString());
        box_direct_sort->setObjectName("box_direct_sort");
        box_direct_sort->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(box_direct_sort);

        btn_Sort = new QPushButton(PrintWindow);
        btn_Sort->setObjectName("btn_Sort");
        btn_Sort->setFont(font1);
        btn_Sort->setMouseTracking(true);
        btn_Sort->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(215, 207, 227);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton::hover{\n"
"	background-color: rgb(223, 202, 235);\n"
"}"));

        verticalLayout->addWidget(btn_Sort);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(PrintWindow);
        label_2->setObjectName("label_2");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(10);
        label_2->setFont(font3);

        verticalLayout->addWidget(label_2);

        box_type_serach = new QComboBox(PrintWindow);
        box_type_serach->addItem(QString());
        box_type_serach->addItem(QString());
        box_type_serach->addItem(QString());
        box_type_serach->setObjectName("box_type_serach");
        box_type_serach->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(box_type_serach);

        box_direct_search = new QComboBox(PrintWindow);
        box_direct_search->addItem(QString());
        box_direct_search->addItem(QString());
        box_direct_search->addItem(QString());
        box_direct_search->addItem(QString());
        box_direct_search->setObjectName("box_direct_search");
        box_direct_search->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(box_direct_search);

        dateEdit = new QDateEdit(PrintWindow);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        dateEdit->setMaximumDate(QDate(3000, 12, 31));
        dateEdit->setMinimumDate(QDate(2024, 5, 1));
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2024, 5, 1));

        verticalLayout->addWidget(dateEdit);

        btn_Search = new QPushButton(PrintWindow);
        btn_Search->setObjectName("btn_Search");
        btn_Search->setFont(font1);
        btn_Search->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(215, 207, 227);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton::hover{\n"
"	background-color: rgb(223, 202, 235);\n"
"}"));

        verticalLayout->addWidget(btn_Search);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        btn_diagram = new QPushButton(PrintWindow);
        btn_diagram->setObjectName("btn_diagram");
        btn_diagram->setFont(font1);
        btn_diagram->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(215, 207, 227);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton::hover{\n"
"	background-color: rgb(223, 202, 235);\n"
"}"));

        verticalLayout->addWidget(btn_diagram);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        btn_report = new QPushButton(PrintWindow);
        btn_report->setObjectName("btn_report");
        QFont font4;
        font4.setPointSize(8);
        btn_report->setFont(font4);
        btn_report->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(215, 207, 227);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton::hover{\n"
"	background-color: rgb(223, 202, 235);\n"
"}"));

        verticalLayout->addWidget(btn_report);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        btn_exit = new QPushButton(PrintWindow);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(85, 0, 0);\n"
"selection-background-color: rgb(255, 0, 0);\n"
"background-color: rgb(215, 207, 227);\n"
"}\n"
"QPushButton::hover{\n"
"	background-color: rgb(170, 0, 0);\n"
"}"));

        verticalLayout->addWidget(btn_exit);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(PrintWindow);

        QMetaObject::connectSlotsByName(PrintWindow);
    } // setupUi

    void retranslateUi(QDialog *PrintWindow)
    {
        PrintWindow->setWindowTitle(QCoreApplication::translate("PrintWindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\276\320\272\320\275\320\276", nullptr));
        btn_Add->setText(QCoreApplication::translate("PrintWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        btn_deleteSort->setText(QCoreApplication::translate("PrintWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        btn_deleteSearch->setText(QCoreApplication::translate("PrintWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("PrintWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        box_type_sort->setItemText(0, QCoreApplication::translate("PrintWindow", "\320\237\320\276 \320\272\320\276\321\200\320\277\321\203\321\201\321\203", nullptr));
        box_type_sort->setItemText(1, QCoreApplication::translate("PrintWindow", "\320\237\320\276 \321\202\320\270\320\277\321\203 \320\272\320\276\320\274\320\275\320\260\321\202\321\213", nullptr));
        box_type_sort->setItemText(2, QCoreApplication::translate("PrintWindow", "\320\237\320\276 \320\264\320\260\321\202\320\265 \320\267\320\260\320\265\320\267\320\264\320\260", nullptr));
        box_type_sort->setItemText(3, QCoreApplication::translate("PrintWindow", "\320\237\320\276 \320\277\320\276\320\273\320\275\320\276\320\271 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\320\270", nullptr));

        box_direct_sort->setItemText(0, QCoreApplication::translate("PrintWindow", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216", nullptr));
        box_direct_sort->setItemText(1, QCoreApplication::translate("PrintWindow", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));

        btn_Sort->setText(QCoreApplication::translate("PrintWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(whatsthis)
        label_2->setWhatsThis(QCoreApplication::translate("PrintWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("PrintWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        box_type_serach->setItemText(0, QCoreApplication::translate("PrintWindow", "\320\237\320\276 \321\202\320\270\320\277\321\203 \320\272\320\276\320\274\320\275\320\260\321\202\321\213", nullptr));
        box_type_serach->setItemText(1, QCoreApplication::translate("PrintWindow", "\320\237\320\276 \321\203\321\201\320\273\321\203\320\263\320\260\320\274", nullptr));
        box_type_serach->setItemText(2, QCoreApplication::translate("PrintWindow", "\320\237\320\276 \320\264\320\260\321\202\320\265 \320\267\320\260\320\265\320\267\320\264\320\260", nullptr));

        box_direct_search->setItemText(0, QCoreApplication::translate("PrintWindow", "\320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202", nullptr));
        box_direct_search->setItemText(1, QCoreApplication::translate("PrintWindow", "\320\221\320\270\320\267\320\275\320\265\321\201\321\201 \320\272\320\273\320\260\321\201\321\201", nullptr));
        box_direct_search->setItemText(2, QCoreApplication::translate("PrintWindow", "\320\237\320\265\321\200\320\262\321\213\320\271 \320\272\320\273\320\260\321\201\321\201", nullptr));
        box_direct_search->setItemText(3, QCoreApplication::translate("PrintWindow", "\320\224\320\265\320\273\321\216\320\272\321\201", nullptr));

        btn_Search->setText(QCoreApplication::translate("PrintWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
        btn_diagram->setText(QCoreApplication::translate("PrintWindow", "\320\224\320\270\320\260\320\263\321\200\320\260\320\274\320\274\320\260", nullptr));
        btn_report->setText(QCoreApplication::translate("PrintWindow", "\320\236\321\202\321\207\320\265\321\202 \320\277\320\276 \320\261\321\200\320\276\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\216", nullptr));
        btn_exit->setText(QCoreApplication::translate("PrintWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrintWindow: public Ui_PrintWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTWINDOW_H
