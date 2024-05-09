 #pragma once
#ifndef ADDWINDOW_H
#define ADDWINDOW_H
#include <QDialog>
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

    void on_box_TypeRoom_currentIndexChanged(int index);

    void on_box_Corpus_currentIndexChanged(int index);

private:
    Ui::AddWindow *ui;
};

#endif // ADDWINDOW_H
