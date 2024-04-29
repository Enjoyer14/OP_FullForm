#include "printwindow.h"
#include "ui_printwindow.h"

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


    QString favors;
    for(int i = 0; i < hdata->vecHotel.size(); i++)
    {
        model->insertRow(model->rowCount(QModelIndex()));
        model->setData(model->index(i, 0), hdata->vecHotel[i].GetBody());
        model->setData(model->index(i, 1), hdata->vecHotel[i].GetRoom());
        model->setData(model->index(i, 2), hdata->vecHotel[i].GetFullName());
        for(int j = 0; j < hdata->vecHotel[i].favors.size(); j++)
        {
            if(j != 0){favors += ", ";}
            if(hdata->vecHotel[i].favors[j] == 1)
            {
                favors += "Бассейн";
            }
            if(hdata->vecHotel[i].favors[j] == 2)
            {
                favors += "Завтрак/Обед";
            }
            if(hdata->vecHotel[i].favors[j] == 3)
            {
                favors += "Фитнесс-зал";
            }
            if(hdata->vecHotel[i].favors[j] == 4)
            {
                favors += "Спа";
            }
            if(hdata->vecHotel[i].favors[j] == 5)
            {
                favors += "Транспорт";
            }
            if(hdata->vecHotel[i].favors[j] == 6)
            {
                favors += "Wifi";
            }
        }
        model->setData(model->index(i, 3), favors);
        favors = " ";
        model->setData(model->index(i, 4), hdata->vecHotel[i].GetCost());
        model->setData(model->index(i, 5), hdata->vecHotel[i].GetPhoneNumber());
        model->setData(model->index(i, 6), hdata->vecHotel[i].GetEMail());
        model->setData(model->index(i, 7), hdata->vecHotel[i].GetDate());
        model->setData(model->index(i, 8), hdata->vecHotel[i].GetNightsNumber());
        model->setData(model->index(i, 9), hdata->vecHotel[i].GetFullCost());

    }

    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

}



void PrintWindow::on_btn_Sort_clicked()
{
    Dialog window;
    window.hdata = this->hdata;
    window.setModal(true);
    window.exec();

    while(model->rowCount() != 0){
        model->removeRows(ui->tableView->currentIndex().row(), 1);
    }

    this->printTable();
}


void PrintWindow::on_btn_Search_clicked()
{
    SearchWin window;
    window.hdata = this->hdata;
    window.setModal(true);
    window.exec();
    this->hdata = window.shdata;
    while(model->rowCount() != 0){
        model->removeRows(ui->tableView->currentIndex().row(), 1);
    }

    this->printTable();
}

