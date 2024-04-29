#pragma once
#ifndef PRINTWINDOW_H
#define PRINTWINDOW_H
#include <QDialog>
#include "Hotel.h"
#include <QVector>
#include "hdata.h"
#include "dialog.h"
#include <QMessageBox>
#include <QTableWidget>
#include <QAbstractTableModel>
#include <QVariant>
#include <QStandardItemModel>

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

    QStandardItemModel *model = new QStandardItemModel(0, 10);

    HData *hdata;

private slots:


    void on_btn_Sort_clicked();

private:
    Ui::PrintWindow *ui;
};

#endif // PRINTWINDOW_H
