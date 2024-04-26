#include "printwindow.h"
#include "ui_printwindow.h"
#include <QMessageBox>
#include <QTableWidget>
#include <QAbstractTableModel>
#include <QVariant>
#include <QStandardItemModel>

PrintWindow::PrintWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PrintWindow)
{
    ui->setupUi(this);
}

PrintWindow::~PrintWindow()
{
    delete ui;
}

void PrintWindow::printTable()
{
    QStandardItemModel *model = new QStandardItemModel(0, 10);
    ui->tableView->setModel(model);
    model->setHeaderData(0, Qt::Horizontal, "Корпус");
    model->setHeaderData(1, Qt::Horizontal, "Тип комнаты");
    model->setHeaderData(2, Qt::Horizontal, "ФИО");
    model->setHeaderData(3, Qt::Horizontal, "Услуги");
    model->setHeaderData(4, Qt::Horizontal, "Цена");
    model->setHeaderData(5, Qt::Horizontal, "Номер телефона");
    model->setHeaderData(6, Qt::Horizontal, "E-Mail");
    model->setHeaderData(7, Qt::Horizontal, "Дата заезда");
    model->setHeaderData(8, Qt::Horizontal, "Количество ночей");
    model->setHeaderData(9, Qt::Horizontal, "Полная стоимость");

    for(int i = 0; i < hdata->vecHotel.size(); i++)
    {
        model->insertRow(model->rowCount(QModelIndex()));
        model->setData(model->index(i, 0), hdata->vecHotel[i].GetBody());
        model->setData(model->index(i, 1), hdata->vecHotel[i].GetRoom());
        model->setData(model->index(i, 2), hdata->vecHotel[i].GetFullName());
        model->setData(model->index(i, 3), "-");
        model->setData(model->index(i, 4), hdata->vecHotel[i].GetCost());
        model->setData(model->index(i, 5), hdata->vecHotel[i].GetPhoneNumber());
        model->setData(model->index(i, 6), hdata->vecHotel[i].GetEMail());
        model->setData(model->index(i, 7), hdata->vecHotel[i].GetDate());
        model->setData(model->index(i, 8), hdata->vecHotel[i].GetNightsNumber());
        model->setData(model->index(i, 9), hdata->vecHotel[i].GetFullCost());

    }

    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

}


