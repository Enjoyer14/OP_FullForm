/********************************************************************************
** Form generated from reading UI file 'sdgb.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SDGB_H
#define UI_SDGB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_sdgb
{
public:

    void setupUi(QDialog *sdgb)
    {
        if (sdgb->objectName().isEmpty())
            sdgb->setObjectName("sdgb");
        sdgb->resize(400, 300);

        retranslateUi(sdgb);

        QMetaObject::connectSlotsByName(sdgb);
    } // setupUi

    void retranslateUi(QDialog *sdgb)
    {
        sdgb->setWindowTitle(QCoreApplication::translate("sdgb", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sdgb: public Ui_sdgb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SDGB_H
