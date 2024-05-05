#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Hotel.h"
#include "hdata.h"
#include <QDialog>
#include <QVector>
#include <QMessageBox>
#include <QTableWidget>
#include <QAbstractTableModel>
#include <QVariant>
#include <QStandardItemModel>
#include <QObject>
#include <QTableView>
#include <QDebug>
#include "addwindow.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void printTable();
    void printTableSearch();

    static void ReadDataBase(HData &hdata);
    static void WriteDataBase(HData &hdata);

    QStandardItemModel *model;

    HData dataH;
    HData *hdata = &dataH;
    HData *shdata;

private slots:

    void handleDoubleClick(const QModelIndex &index);
    void handleDoubleClickHoriz(int);

    void on_btn_Sort_clicked();

    void on_btn_Search_clicked();

    void on_box_type_serach_currentIndexChanged(int index);

    void on_btn_Add_clicked();

    void on_btn_exit_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
