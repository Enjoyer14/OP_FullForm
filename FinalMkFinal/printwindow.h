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
#include "addwindow.h"
#include <QtCharts>

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

    static void ReadDataBase(HData &hdata);
    static void WriteDataBase(HData &hdata);

    QStandardItemModel *model;

    HData dataH;
    HData *hdata = &dataH;
    HData *shdata;

    int tableCurr;
    int index;

private slots:

    void handleDoubleClick(const QModelIndex &index);
    void handleDoubleClickHoriz(int);

    void on_btn_Sort_clicked();

    void on_btn_Search_clicked();

    void on_box_type_serach_currentIndexChanged(int index);

    void on_btn_Add_clicked();

    void on_btn_exit_clicked();

    void on_btn_deleteSort_clicked();

    void on_btn_deleteSearch_clicked();

    void on_btn_diagram_clicked();

private:
    Ui::PrintWindow *ui;

};

#endif // PRINTWINDOW_H
