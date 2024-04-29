#pragma once
#ifndef SEARCHWIN_H
#define SEARCHWIN_H
#include "hdata.h"
#include <QDialog>
#include <QDateEdit>

namespace Ui {
class SearchWin;
}

class SearchWin : public QDialog
{
    Q_OBJECT

public:
    explicit SearchWin(QWidget *parent = nullptr);
    ~SearchWin();

    HData *hdata;
    HData *shdata = new HData();

private slots:


    void on_box_choosing_type_currentTextChanged();

    void on_btn_apply_clicked();

private:
    Ui::SearchWin *ui;
};

#endif // SEARCHWIN_H
