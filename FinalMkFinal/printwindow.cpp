#include "printwindow.h"
#include "ui_printwindow.h"

PrintWindow::PrintWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PrintWindow)
{
    ui->setupUi(this);
    ui->dateEdit->hide();
}

PrintWindow::~PrintWindow()
{
    delete ui;
}

void PrintWindow::printTable()
{

    model = new QStandardItemModel(0, 10);

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

void PrintWindow::printTableSearch()
{
    model = new QStandardItemModel(0, 10);

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
    for(int i = 0; i < shdata->vecHotel.size(); i++)
    {
        model->insertRow(model->rowCount(QModelIndex()));
        model->setData(model->index(i, 0), shdata->vecHotel[i].GetBody());
        model->setData(model->index(i, 1), shdata->vecHotel[i].GetRoom());
        model->setData(model->index(i, 2), shdata->vecHotel[i].GetFullName());
        for(int j = 0; j < shdata->vecHotel[i].favors.size(); j++)
        {
            if(j != 0){favors += ", ";}
            if(shdata->vecHotel[i].favors[j] == 1)
            {
                favors += "Бассейн";
            }
            if(shdata->vecHotel[i].favors[j] == 2)
            {
                favors += "Завтрак/Обед";
            }
            if(shdata->vecHotel[i].favors[j] == 3)
            {
                favors += "Фитнесс-зал";
            }
            if(shdata->vecHotel[i].favors[j] == 4)
            {
                favors += "Спа";
            }
            if(shdata->vecHotel[i].favors[j] == 5)
            {
                favors += "Транспорт";
            }
            if(shdata->vecHotel[i].favors[j] == 6)
            {
                favors += "Wifi";
            }
        }
        model->setData(model->index(i, 3), favors);
        favors = " ";
        model->setData(model->index(i, 4), shdata->vecHotel[i].GetCost());
        model->setData(model->index(i, 5), shdata->vecHotel[i].GetPhoneNumber());
        model->setData(model->index(i, 6), shdata->vecHotel[i].GetEMail());
        model->setData(model->index(i, 7), shdata->vecHotel[i].GetDate());
        model->setData(model->index(i, 8), shdata->vecHotel[i].GetNightsNumber());
        model->setData(model->index(i, 9), shdata->vecHotel[i].GetFullCost());

    }

    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}


void PrintWindow::on_btn_Sort_clicked()
{
    switch(ui->box_type_sort->currentIndex())
    {
    case 0: HData::SortByBody(*hdata, ui->box_direct_sort->currentIndex()+1); break;
    case 1: HData::SortByRoomType(*hdata, ui->box_direct_sort->currentIndex()+1); break;
    case 2: HData::SortByArrivalDate(*hdata, ui->box_direct_sort->currentIndex()+1); break;
    case 3: HData::SortByCost(*hdata, ui->box_direct_sort->currentIndex()+1); break;
    }

    delete model;

    this->printTable();

}


void PrintWindow::on_btn_Search_clicked()
{
    shdata = new HData();

    switch(ui->box_type_serach->currentIndex())
    {
    case 0: HData::SearchByRoomType(*hdata, *shdata, ui->box_direct_search->currentIndex()+1); break;
    case 1: HData::SearchByFavors(*hdata, *shdata, ui->box_direct_search->currentIndex()+1); break;
    case 2: break;
    }

    delete model;

    this->printTableSearch();

    delete shdata;
}


void PrintWindow::on_box_type_serach_currentIndexChanged(int index)
{
    switch(ui->box_type_serach->currentIndex())
    {
    case 0:
        ui->dateEdit->hide();
        ui->box_direct_search->show();
        ui->box_direct_search->clear();
        ui->box_direct_search->addItem("Стандарт");
        ui->box_direct_search->addItem("Бизнесс класс");
        ui->box_direct_search->addItem("Первый класс");
        ui->box_direct_search->addItem("Делюкс");
        break;
    case 1:
        ui->dateEdit->hide();
        ui->box_direct_search->show();
        ui->box_direct_search->clear();
        ui->box_direct_search->addItem("Бассейн");
        ui->box_direct_search->addItem("Завтрак/Обед");
        ui->box_direct_search->addItem("Фитнесс зал");
        ui->box_direct_search->addItem("Спа");
        ui->box_direct_search->addItem("Транспорт");
        ui->box_direct_search->addItem("Wifi");
        break;
    case 2:
        ui->box_direct_search->hide();
        ui->dateEdit->show();
        break;
    }



}

