/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QDate>
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
    QFormLayout *formLayout_2;
    QPushButton *pushButton;
    QPushButton *btn_Add;
    QLabel *label_isCorrect;
    QFormLayout *formLayout;
    QLabel *label_bodu;
    QComboBox *box_Corpus;
    QLabel *label_3;
    QComboBox *box_TypeRoom;
    QLabel *label_f;
    QLineEdit *lineEdit_FIO;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_Pool;
    QCheckBox *checkBox_Lunch;
    QCheckBox *checkBox_Fitness;
    QCheckBox *checkBox_Spa;
    QCheckBox *checkBox_Transport;
    QCheckBox *checkBox_Wifi;
    QLabel *label_cost;
    QLabel *label_mail;
    QLineEdit *lineEdit_Email;
    QLabel *label_phone;
    QLineEdit *lineEdit_PhoneNumber;
    QLabel *label_8;
    QDateEdit *dateEdit;
    QLabel *label_nights;
    QLineEdit *lineEdit_NightCount;
    QLabel *label_n;
    QLineEdit *lineEdit_Name;
    QLabel *label_o;
    QLineEdit *lineEdit_FatherName;
    QLabel *label_Cost;

    void setupUi(QDialog *AddWindow)
    {
        if (AddWindow->objectName().isEmpty())
            AddWindow->setObjectName("AddWindow");
        AddWindow->resize(449, 605);
        AddWindow->setMinimumSize(QSize(449, 575));
        AddWindow->setMaximumSize(QSize(449, 625));
        gridLayout = new QGridLayout(AddWindow);
        gridLayout->setObjectName("gridLayout");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        pushButton = new QPushButton(AddWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 0, 0);\n"
"selection-background-color: rgb(126, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton::hover{\n"
"	background-color: rgb(170, 0, 0);\n"
"}"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, pushButton);

        btn_Add = new QPushButton(AddWindow);
        btn_Add->setObjectName("btn_Add");
        btn_Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(0, 170, 0);\n"
"selection-background-color: rgb(0, 255, 0);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton::hover{\n"
"	background-color: rgb(45, 122, 28);\n"
"}"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, btn_Add);


        gridLayout->addLayout(formLayout_2, 5, 0, 1, 1);

        label_isCorrect = new QLabel(AddWindow);
        label_isCorrect->setObjectName("label_isCorrect");
        label_isCorrect->setMaximumSize(QSize(16777215, 20));
        label_isCorrect->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        gridLayout->addWidget(label_isCorrect, 6, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_bodu = new QLabel(AddWindow);
        label_bodu->setObjectName("label_bodu");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_bodu);

        box_Corpus = new QComboBox(AddWindow);
        box_Corpus->addItem(QString());
        box_Corpus->addItem(QString());
        box_Corpus->addItem(QString());
        box_Corpus->addItem(QString());
        box_Corpus->addItem(QString());
        box_Corpus->setObjectName("box_Corpus");
        box_Corpus->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(225, 216, 232);\n"
"border: 2px solid rgb(166, 166, 166);\n"
""));

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
        box_TypeRoom->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(225, 216, 232);\n"
"border: 2px solid rgb(166, 166, 166);\n"
""));

        formLayout->setWidget(1, QFormLayout::FieldRole, box_TypeRoom);

        label_f = new QLabel(AddWindow);
        label_f->setObjectName("label_f");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_f);

        lineEdit_FIO = new QLineEdit(AddWindow);
        lineEdit_FIO->setObjectName("lineEdit_FIO");
        lineEdit_FIO->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(238, 223, 242);\n"
"}"));
        lineEdit_FIO->setMaxLength(40);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_FIO);

        label_4 = new QLabel(AddWindow);
        label_4->setObjectName("label_4");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        checkBox_Pool = new QCheckBox(AddWindow);
        checkBox_Pool->setObjectName("checkBox_Pool");
        checkBox_Pool->setStyleSheet(QString::fromUtf8(""));

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


        formLayout->setLayout(5, QFormLayout::FieldRole, verticalLayout);

        label_cost = new QLabel(AddWindow);
        label_cost->setObjectName("label_cost");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_cost);

        label_mail = new QLabel(AddWindow);
        label_mail->setObjectName("label_mail");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_mail);

        lineEdit_Email = new QLineEdit(AddWindow);
        lineEdit_Email->setObjectName("lineEdit_Email");
        lineEdit_Email->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(85, 0, 0);\n"
"background-color: rgb(200, 192, 209);\n"
"}"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_Email);

        label_phone = new QLabel(AddWindow);
        label_phone->setObjectName("label_phone");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_phone);

        lineEdit_PhoneNumber = new QLineEdit(AddWindow);
        lineEdit_PhoneNumber->setObjectName("lineEdit_PhoneNumber");
        lineEdit_PhoneNumber->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(85, 0, 0);\n"
"background-color: rgb(200, 192, 209);\n"
"}"));
        lineEdit_PhoneNumber->setMaxLength(11);
        lineEdit_PhoneNumber->setClearButtonEnabled(false);

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEdit_PhoneNumber);

        label_8 = new QLabel(AddWindow);
        label_8->setObjectName("label_8");

        formLayout->setWidget(9, QFormLayout::LabelRole, label_8);

        dateEdit = new QDateEdit(AddWindow);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(225, 216, 232);\n"
"border: 2px solid rgb(166, 166, 166);\n"
""));
        dateEdit->setMaximumDate(QDate(3000, 12, 31));
        dateEdit->setMinimumDate(QDate(2024, 5, 1));
        dateEdit->setCalendarPopup(true);

        formLayout->setWidget(9, QFormLayout::FieldRole, dateEdit);

        label_nights = new QLabel(AddWindow);
        label_nights->setObjectName("label_nights");

        formLayout->setWidget(10, QFormLayout::LabelRole, label_nights);

        lineEdit_NightCount = new QLineEdit(AddWindow);
        lineEdit_NightCount->setObjectName("lineEdit_NightCount");
        lineEdit_NightCount->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(85, 0, 0);\n"
"background-color: rgb(200, 192, 209);\n"
"}"));

        formLayout->setWidget(10, QFormLayout::FieldRole, lineEdit_NightCount);

        label_n = new QLabel(AddWindow);
        label_n->setObjectName("label_n");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_n);

        lineEdit_Name = new QLineEdit(AddWindow);
        lineEdit_Name->setObjectName("lineEdit_Name");
        lineEdit_Name->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(85, 0, 0);\n"
"background-color: rgb(200, 192, 209);\n"
"}"));
        lineEdit_Name->setMaxLength(40);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_Name);

        label_o = new QLabel(AddWindow);
        label_o->setObjectName("label_o");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_o);

        lineEdit_FatherName = new QLineEdit(AddWindow);
        lineEdit_FatherName->setObjectName("lineEdit_FatherName");
        lineEdit_FatherName->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(85, 0, 0);\n"
"background-color: rgb(200, 192, 209);\n"
"}"));
        lineEdit_FatherName->setMaxLength(40);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_FatherName);

        label_Cost = new QLabel(AddWindow);
        label_Cost->setObjectName("label_Cost");
        label_Cost->setAutoFillBackground(true);
        label_Cost->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(6, QFormLayout::FieldRole, label_Cost);


        gridLayout->addLayout(formLayout, 3, 0, 1, 1);


        retranslateUi(AddWindow);
        QObject::connect(pushButton, &QPushButton::clicked, AddWindow, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(AddWindow);
    } // setupUi

    void retranslateUi(QDialog *AddWindow)
    {
        AddWindow->setWindowTitle(QCoreApplication::translate("AddWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\261\321\200\320\276\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("AddWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        btn_Add->setText(QCoreApplication::translate("AddWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_isCorrect->setText(QString());
        label_bodu->setText(QCoreApplication::translate("AddWindow", "\320\232\320\276\321\200\320\277\321\203\321\201", nullptr));
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

        label_f->setText(QCoreApplication::translate("AddWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        lineEdit_FIO->setText(QString());
        label_4->setText(QCoreApplication::translate("AddWindow", "\320\243\321\201\320\273\321\203\320\263\320\270", nullptr));
        checkBox_Pool->setText(QCoreApplication::translate("AddWindow", "\320\221\320\260\321\201\321\201\320\265\320\271\320\275(+1200 \321\200\321\203\320\261/\321\201\321\203\321\202\320\272\320\270)", nullptr));
        checkBox_Lunch->setText(QCoreApplication::translate("AddWindow", "\320\240\320\265\321\201\321\202\320\276\321\200\320\260\320\275(+1500 \321\200\321\203\320\261/\321\201\321\203\321\202\320\272\320\270)", nullptr));
        checkBox_Fitness->setText(QCoreApplication::translate("AddWindow", "\320\244\320\270\321\202\320\275\320\265\321\201\321\201-\320\267\320\260\320\273(+600 \321\200\321\203\320\261/\321\201\321\203\321\202\320\272\320\270)", nullptr));
        checkBox_Spa->setText(QCoreApplication::translate("AddWindow", "\320\241\320\277\320\260(+2000 \321\200\321\203\320\261/\321\201\321\203\321\202\320\272\320\270)", nullptr));
        checkBox_Transport->setText(QCoreApplication::translate("AddWindow", "\320\242\321\200\320\260\320\275\321\201\320\277\320\276\321\200\321\202(+700 \321\200\321\203\320\261/\321\201\321\203\321\202\320\272\320\270)", nullptr));
        checkBox_Wifi->setText(QCoreApplication::translate("AddWindow", "Wi-fi(+350 \321\200\321\203\320\261/\321\201\321\203\321\202\320\272\320\270)", nullptr));
        label_cost->setText(QCoreApplication::translate("AddWindow", "\320\246\320\265\320\275\320\260", nullptr));
        label_mail->setText(QCoreApplication::translate("AddWindow", "E-mail", nullptr));
        label_phone->setText(QCoreApplication::translate("AddWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        lineEdit_PhoneNumber->setInputMask(QString());
        label_8->setText(QCoreApplication::translate("AddWindow", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\265\320\267\320\264\320\260", nullptr));
        label_nights->setText(QCoreApplication::translate("AddWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\275\320\276\321\207\320\265\320\271", nullptr));
        label_n->setText(QCoreApplication::translate("AddWindow", "\320\230\320\274\321\217", nullptr));
        label_o->setText(QCoreApplication::translate("AddWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276*", nullptr));
        lineEdit_FatherName->setText(QString());
        label_Cost->setText(QCoreApplication::translate("AddWindow", "3400", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWindow: public Ui_AddWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
