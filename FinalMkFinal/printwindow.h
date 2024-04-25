#pragma once
#ifndef PRINTWINDOW_H
#define PRINTWINDOW_H
#include <QDialog>
#include <vector>
#include "Hotel.h"
#include <QVector>
#include "hdata.h"

namespace Ui {
class PrintWindow;
}

class PrintWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PrintWindow(QWidget *parent = nullptr);
    ~PrintWindow();

    void printTable();

    HData *hdata;

private slots:


private:
    Ui::PrintWindow *ui;
};

#endif // PRINTWINDOW_H
