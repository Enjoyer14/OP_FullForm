/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddWindow
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *box_Corpus;
    QLabel *label_3;
    QComboBox *box_TypeRoom;
    QLabel *label;
    QLineEdit *lineEdit_FIO;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_Pool;
    QCheckBox *checkBox_Lunch;
    QCheckBox *checkBox_Fitness;
    QCheckBox *checkBox_Spa;
    QCheckBox *checkBox_Transport;
    QCheckBox *checkBox_Wifi;
    QLabel *label_5;
    QLineEdit *lineEdit_Cost;
    QLabel *label_7;
    QLineEdit *lineEdit_Email;
    QLabel *label_6;
    QLineEdit *lineEdit_PhoneNumber;
    QLabel *label_8;
    QDateEdit *dateEdit;
    QLabel *label_9;
    QLineEdit *lineEdit_NightCount;
    QFormLayout *formLayout_2;
    QPushButton *pushButton;
    QPushButton *btn_Add;

    void setupUi(QDialog *AddWindow)
    {
        if (AddWindow->objectName().isEmpty())
            AddWindow->setObjectName("AddWindow");
        AddWindow->resize(949, 634);
        gridLayout = new QGridLayout(AddWindow);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(AddWindow);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        box_Corpus = new QComboBox(AddWindow);
        box_Corpus->addItem(QString());
        box_Corpus->addItem(QString());
        box_Corpus->addItem(QString());
        box_Corpus->addItem(QString());
        box_Corpus->addItem(QString());
        box_Corpus->setObjectName("box_Corpus");

        formLayout->setWidget(0, QFormLayout::FieldRole, box_Corpus);

        label_3 = new QLabel(AddWindow);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        box_TypeRoom = new QComboBox(AddWindow);
        box_TypeRoom->addItem(QString());
        box_TypeRoom->addItem(QString());
        box_TypeRoom->addItem(QString());
        box_TypeRoom->addItem(QString());
        box_TypeRoom->setObjectName("box_TypeRoom");

        formLayout->setWidget(1, QFormLayout::FieldRole, box_TypeRoom);

        label = new QLabel(AddWindow);
        label->setObjectName("label");

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        lineEdit_FIO = new QLineEdit(AddWindow);
        lineEdit_FIO->setObjectName("lineEdit_FIO");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_FIO);

        label_4 = new QLabel(AddWindow);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        checkBox_Pool = new QCheckBox(AddWindow);
        checkBox_Pool->setObjectName("checkBox_Pool");

        verticalLayout->addWidget(checkBox_Pool);

        checkBox_Lunch = new QCheckBox(AddWindow);
        checkBox_Lunch->setObjectName("checkBox_Lunch");

        verticalLayout->addWidget(checkBox_Lunch);

        checkBox_Fitness = new QCheckBox(AddWindow);
        checkBox_Fitness->setObjectName("checkBox_Fitness");

        verticalLayout->addWidget(checkBox_Fitness);

        checkBox_Spa = new QCheckBox(AddWindow);
        checkBox_Spa->setObjectName("checkBox_Spa");

        verticalLayout->addWidget(checkBox_Spa);

        checkBox_Transport = new QCheckBox(AddWindow);
        checkBox_Transport->setObjectName("checkBox_Transport");

        verticalLayout->addWidget(checkBox_Transport);

        checkBox_Wifi = new QCheckBox(AddWindow);
        checkBox_Wifi->setObjectName("checkBox_Wifi");

        verticalLayout->addWidget(checkBox_Wifi);


        formLayout->setLayout(3, QFormLayout::FieldRole, verticalLayout);

        label_5 = new QLabel(AddWindow);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_Cost = new QLineEdit(AddWindow);
        lineEdit_Cost->setObjectName("lineEdit_Cost");

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_Cost);

        label_7 = new QLabel(AddWindow);
        label_7->setObjectName("label_7");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        lineEdit_Email = new QLineEdit(AddWindow);
        lineEdit_Email->setObjectName("lineEdit_Email");

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_Email);

        label_6 = new QLabel(AddWindow);
        label_6->setObjectName("label_6");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        lineEdit_PhoneNumber = new QLineEdit(AddWindow);
        lineEdit_PhoneNumber->setObjectName("lineEdit_PhoneNumber");

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_PhoneNumber);

        label_8 = new QLabel(AddWindow);
        label_8->setObjectName("label_8");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        dateEdit = new QDateEdit(AddWindow);
        dateEdit->setObjectName("dateEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, dateEdit);

        label_9 = new QLabel(AddWindow);
        label_9->setObjectName("label_9");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        lineEdit_NightCount = new QLineEdit(AddWindow);
        lineEdit_NightCount->setObjectName("lineEdit_NightCount");

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEdit_NightCount);


        gridLayout->addLayout(formLayout, 3, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        pushButton = new QPushButton(AddWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(0, 0, 0);"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, pushButton);

        btn_Add = new QPushButton(AddWindow);
        btn_Add->setObjectName("btn_Add");
        btn_Add->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);\n"
"selection-background-color: rgb(0, 255, 0);\n"
"color: rgb(0, 0, 0);"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, btn_Add);


        gridLayout->addLayout(formLayout_2, 4, 0, 1, 1);


        retranslateUi(AddWindow);
        QObject::connect(pushButton, &QPushButton::clicked, AddWindow, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(AddWindow);
    } // setupUi

    void retranslateUi(QDialog *AddWindow)
    {
        AddWindow->setWindowTitle(QCoreApplication::translate("AddWindow", "AddInfo", nullptr));
        label_2->setText(QCoreApplication::translate("AddWindow", "\320\232\320\276\321\200\320\277\321\203\321\201", nullptr));
        box_Corpus->setItemText(0, QCoreApplication::translate("AddWindow", "\320\220\320\273\321\214\321\204\320\260", nullptr));
        box_Corpus->setItemText(1, QCoreApplication::translate("AddWindow", "\320\221\320\265\321\202\320\260", nullptr));
        box_Corpus->setItemText(2, QCoreApplication::translate("AddWindow", "\320\222\320\265\320\263\320\260", nullptr));
        box_Corpus->setItemText(3, QCoreApplication::translate("AddWindow", "\320\224\320\265\320\273\321\214\321\202\320\260", nullptr));
        box_Corpus->setItemText(4, QCoreApplication::translate("AddWindow", "\320\223\320\260\320\274\320\274\320\260", nullptr));

        label_3->setText(QCoreApplication::translate("AddWindow", "\320\242\320\270\320\277 \320\272\320\276\320\274\320\275\320\260\321\202\321\213", nullptr));
        box_TypeRoom->setItemText(0, QCoreApplication::translate("AddWindow", "\320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202", nullptr));
        box_TypeRoom->setItemText(1, QCoreApplication::translate("AddWindow", "\320\221\320\270\320\267\320\275\320\265\321\201\321\201-\320\272\320\273\320\260\321\201\321\201", nullptr));
        box_TypeRoom->setItemText(2, QCoreApplication::translate("AddWindow", "\320\237\320\265\321\200\320\262\321\213\320\271-\320\272\320\273\320\260\321\201\321\201", nullptr));
        box_TypeRoom->setItemText(3, QCoreApplication::translate("AddWindow", "\320\224\320\265\320\273\321\216\320\272\321\201", nullptr));

        label->setText(QCoreApplication::translate("AddWindow", "\320\244\320\230\320\236", nullptr));
        lineEdit_FIO->setText(QString());
        label_4->setText(QCoreApplication::translate("AddWindow", "\320\243\321\201\320\273\321\203\320\263\320\270", nullptr));
        checkBox_Pool->setText(QCoreApplication::translate("AddWindow", "\320\221\320\260\321\201\321\201\320\265\320\271\320\275", nullptr));
        checkBox_Lunch->setText(QCoreApplication::translate("AddWindow", "\320\227\320\260\320\262\321\202\321\200\320\260\320\272/\320\236\320\261\320\265\320\264/\320\243\320\266\320\270\320\275", nullptr));
        checkBox_Fitness->setText(QCoreApplication::translate("AddWindow", "\320\244\320\270\321\202\320\275\320\265\321\201\321\201-\320\267\320\260\320\273", nullptr));
        checkBox_Spa->setText(QCoreApplication::translate("AddWindow", "\320\241\320\277\320\260", nullptr));
        checkBox_Transport->setText(QCoreApplication::translate("AddWindow", "\320\242\321\200\320\260\320\275\321\201\320\277\320\276\321\200\321\202", nullptr));
        checkBox_Wifi->setText(QCoreApplication::translate("AddWindow", "Wi-fi", nullptr));
        label_5->setText(QCoreApplication::translate("AddWindow", "\320\246\320\265\320\275\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("AddWindow", "E-mail", nullptr));
        label_6->setText(QCoreApplication::translate("AddWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("AddWindow", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\265\320\267\320\264\320\260", nullptr));
        label_9->setText(QCoreApplication::translate("AddWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\275\320\276\321\207\320\265\320\271", nullptr));
        pushButton->setText(QCoreApplication::translate("AddWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        btn_Add->setText(QCoreApplication::translate("AddWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWindow: public Ui_AddWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
