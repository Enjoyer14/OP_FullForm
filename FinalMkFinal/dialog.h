#pragma once
#ifndef DIALOG_H
#define DIALOG_H
#include <QMessageBox>
#include <QDialog>
#include "hdata.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    HData *hdata;

private slots:
    void on_btn_apply_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
