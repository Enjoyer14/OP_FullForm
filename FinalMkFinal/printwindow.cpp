#include "printwindow.h"
#include "ui_printwindow.h"

PrintWindow::PrintWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PrintWindow)
{

    ui->setupUi(this);
    // *parent->setStyleSheet();
    // parentWidget()->setStyleSheet("background-color: #f0f0f0; border: 1px solid #ccc; margin: 10px; border-radius: 10px;");

    setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);

    this->ReadDataBase(dataH);

    this->printTable();

    connect(ui->tableView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(handleDoubleClick(QModelIndex)));
    connect(ui->tableView->verticalHeader(), SIGNAL(sectionDoubleClicked(int)), this, SLOT(handleDoubleClickHoriz(int)));

    ui->dateEdit->hide();

    ui->btn_deleteSort->hide();
    ui->btn_deleteSearch->hide();
}

PrintWindow::~PrintWindow()
{
    delete ui;
}

void PrintWindow::ReadDataBase(HData &dataH)
{
    QFile file("Hotel.txt");
    if(file.open(QIODevice::ReadOnly))
    {
        int count = 1;
        int d, m, y;
        QString n, f, o;
        Hotel buff;
        while(!file.atEnd())
        {
            QStringList lineData = QString(file.readLine()).split(" ");
            buff.id = count++;
            if (lineData[0].toInt() == 1) buff.corpus = Body::Alpha;
            else if (lineData[0].toInt() == 2) buff.corpus = Body::Beta;
            else if (lineData[0].toInt() == 3) buff.corpus = Body::Vega;
            else if (lineData[0].toInt() == 4) buff.corpus = Body::Delta;
            else buff.corpus = Body::Gamma;

            if (lineData[1].toInt() == 1) buff.room = RoomType::Standard;
            else if (lineData[1].toInt() == 2) buff.room = RoomType::BusinessClass;
            else if (lineData[1].toInt() == 3) buff.room = RoomType::FirstClass;
            else if (lineData[1].toInt() == 4) buff.room = RoomType::Deluxe;
            for (int j = 2; j < 8; j++) {
                switch (lineData[j].toInt()) {
                case 1: buff.favors.push_back(SwimmingPool); break;
                case 2: buff.favors.push_back(Lucnh); break;
                case 3: buff.favors.push_back(FitnessRoom); break;
                case 4: buff.favors.push_back(Spa); break;
                case 5: buff.favors.push_back(Transport); break;
                case 6: buff.favors.push_back(FreeWifi); break;
                }
            }
            buff.cost = lineData[8].toInt();
            f = lineData[9];
            n = lineData[10];
            o = lineData[11];
            buff.fullName = f + ' ' + n + ' ' + o;
            buff.phoneNumber = lineData[12];
            buff.eMail = lineData[13];
            d = lineData[14].toInt();
            m = lineData[15].toInt();
            y = lineData[16].toInt();
            buff.date = Date(d, m, y);
            buff.nightsNumber = lineData[17].toInt();
            buff.fullCost = lineData[18].toInt();
            dataH.vecHotel.push_back(buff);
            buff.favors.clear();
        }
    }

}

void PrintWindow::WriteDataBase(HData &hdata)
{
    QFile file("Hotel.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        for(int i = 0; i < hdata.vecHotel.size(); i++)
        {
            int favors[6]{};
            for (int j{}; j < 6; j++) {
                for (int r{}; r < hdata.vecHotel[i].favors.size(); r++) {
                    if (hdata.vecHotel[i].favors[r] == j + 1) {
                        favors[j] = hdata.vecHotel[i].favors[r];
                    }
                }
            }

            stream << hdata.vecHotel[i].corpus << " "
                   << hdata.vecHotel[i].room << " "
                   << favors[0] << " " << favors[1] << " " << favors[2] << " " << favors[3] << " " << favors[4] << " " << favors[5] << " "
                   << hdata.vecHotel[i].cost << " "
                   << hdata.vecHotel[i].fullName << " "
                   << hdata.vecHotel[i].phoneNumber << " "
                   << hdata.vecHotel[i].eMail << " "
                   << hdata.vecHotel[i].date.getDay() << " "
                   << hdata.vecHotel[i].date.getMonth() << " "
                   << hdata.vecHotel[i].date.getYear() << " "
                   << hdata.vecHotel[i].nightsNumber << " "
                   << hdata.vecHotel[i].fullCost << '\n';
        }


        file.close();
    }
}

void PrintWindow::printTable()
{
    tableCurr = 0;
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

    ui->tableView->setStyleSheet("font-weight: bold; font-size: 12px; color: #333;");
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
    tableCurr = 1;
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

    ui->btn_deleteSearch->hide();
    ui->btn_deleteSort->hide();

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
    ui->btn_deleteSearch->hide();
    ui->btn_deleteSort->hide();

    shdata = new HData();

    switch(ui->box_type_serach->currentIndex())
    {
    case 0: HData::SearchByRoomType(*hdata, *shdata, ui->box_direct_search->currentIndex()+1); break;
    case 1: HData::SearchByFavors(*hdata, *shdata, ui->box_direct_search->currentIndex()+1); break;
    case 2: HData::SearchByDate(*hdata, *shdata, ui->dateEdit->date().day(), ui->dateEdit->date().month(), ui->dateEdit->date().year()); break;
    }

    delete model;

    this->printTableSearch();

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

void PrintWindow::on_btn_Add_clicked()
{
    this->hide();
    AddWindow window;
    window.hdata = this->hdata;
    window.setModal(true);
    window.exec();

    this->show();
    delete model;

    this->printTable();
}

void PrintWindow::handleDoubleClick(const QModelIndex &index)
{
    this->index = index.row();

    if(tableCurr == 0)
    {
        ui->btn_deleteSort->show();
    }
    else if(tableCurr == 1)
    {
        ui->btn_deleteSearch->show();
    }
}

void PrintWindow::handleDoubleClickHoriz(int index)
{
    this->index = index;

    if(tableCurr == 0)
    {
        ui->btn_deleteSort->show();
    }
    else if(tableCurr == 1)
    {
        ui->btn_deleteSearch->show();
    }
}


void PrintWindow::on_btn_exit_clicked()
{
    this->WriteDataBase(dataH);
    this->close();
}


void PrintWindow::on_btn_deleteSort_clicked()
{
    int a = QMessageBox::question(this, "Подтверждение", "Вы действительно хотите удалить этот объект(Sort)?", "Нет", "Да");

    if(a == 1)
    {
        hdata->vecHotel.erase(hdata->vecHotel.begin() + this->index);
    }

    ui->btn_deleteSearch->hide();
    ui->btn_deleteSort->hide();

    delete model;

    this->printTable();
}


void PrintWindow::on_btn_deleteSearch_clicked()
{
    int a = QMessageBox::question(this, "Подтверждение", "Вы действительно хотите удалить этот объект(Search)?", "Нет", "Да");

    if(a == 1)
    {
        int finder = shdata->vecHotel[index].id;
        shdata->vecHotel.erase(shdata->vecHotel.begin() + index);
        for(int i = 0; i < hdata->vecHotel.size(); i++)
        {
            if(hdata->vecHotel[i].id == finder)
            {
                hdata->vecHotel.erase(hdata->vecHotel.begin() + i);
            }
        }
    }

    ui->btn_deleteSearch->hide();
    ui->btn_deleteSort->hide();

    delete model;

    this->printTableSearch();

}

void PrintWindow::on_btn_diagram_clicked()
{
    double s = 0, b = 0, p = 0, d = 0;

    for(int i = 0; i < hdata->vecHotel.size(); i++)
    {
        switch(hdata->vecHotel[i].room)
        {
        case 1: s++; break;
        case 2: b++; break;
        case 3: p++; break;
        case 4: d++; break;
        }
    }


    QPieSeries *series = new QPieSeries();

    series->append("Стандарт", s);
    series->append("Бизнес класс", b);
    series->append("Первый класс", p);
    series->append("Делюкс", d);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Круговая диаграмма по типу комнат");

    QChartView *chartView = new QChartView(chart);

    chartView->setRenderHint(QPainter::Antialiasing);

    chartView->show();
}

