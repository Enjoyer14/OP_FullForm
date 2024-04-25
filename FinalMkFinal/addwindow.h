#pragma once
#ifndef ADDWINDOW_H
#define ADDWINDOW_H
#include <QDialog>
#include <vector>
#include "Hotel.h"
#include "hdata.h"

namespace Ui {
class AddWindow;
}

class AddWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddWindow(QWidget *parent = nullptr);
    ~AddWindow();

    HData *hdata;

private slots:
    void on_btn_Add_clicked();

private:
    Ui::AddWindow *ui;
};

#endif // ADDWINDOW_H
