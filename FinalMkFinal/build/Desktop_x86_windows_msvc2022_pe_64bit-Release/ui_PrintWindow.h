/********************************************************************************
** Form generated from reading UI file 'printwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTWINDOW_H
#define UI_PRINTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_PrintWindow
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QDialog *PrintWindow)
    {
        if (PrintWindow->objectName().isEmpty())
            PrintWindow->setObjectName("PrintWindow");
        PrintWindow->resize(956, 721);
        gridLayout = new QGridLayout(PrintWindow);
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(PrintWindow);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        retranslateUi(PrintWindow);

        QMetaObject::connectSlotsByName(PrintWindow);
    } // setupUi

    void retranslateUi(QDialog *PrintWindow)
    {
        PrintWindow->setWindowTitle(QCoreApplication::translate("PrintWindow", "PrintInfo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrintWindow: public Ui_PrintWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTWINDOW_H
