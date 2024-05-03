#pragma once
#ifndef PRINTWINDOW_H
#define PRINTWINDOW_H
#include <QDialog>
#include "Hotel.h"
#include <QVector>
#include "hdata.h"
#include <QMessageBox>
#include <QTableWidget>
#include <QAbstractTableModel>
#include <QVariant>
#include <QStandardItemModel>
#include <QObject>
#include <QTableView>
#include <QDebug>

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
    void printTableSearch();

    QStandardItemModel *model;

    HData *hdata;
    HData *shdata;

private slots:

    void handleDoubleClick(const QModelIndex &index);
    void handleDoubleClickHoriz(int);

    void on_btn_Sort_clicked();

    void on_btn_Search_clicked();

    void on_box_type_serach_currentIndexChanged(int index);

private:
    Ui::PrintWindow *ui;

};

#endif // PRINTWINDOW_H
