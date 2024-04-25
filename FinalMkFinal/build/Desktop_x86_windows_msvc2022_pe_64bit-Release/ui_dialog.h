/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QFormLayout *formLayout;
    QLabel *label;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(Dialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        radioButton = new QRadioButton(Dialog);
        radioButton->setObjectName("radioButton");

        formLayout->setWidget(0, QFormLayout::FieldRole, radioButton);

        radioButton_2 = new QRadioButton(Dialog);
        radioButton_2->setObjectName("radioButton_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, radioButton_2);

        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_2);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, pushButton);

        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName("lineEdit");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_2);


        verticalLayout_2->addLayout(formLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        radioButton->setText(QCoreApplication::translate("Dialog", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Dialog", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\262\320\275\320\270\321\216", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        lineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("Dialog", "\320\237\320\276\320\270\321\201\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
