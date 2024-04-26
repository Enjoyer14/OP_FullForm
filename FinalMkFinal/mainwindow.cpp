#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addwindow.h"
#include "printwindow.h"
#include <QMessageBox>
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ReadDataBase(dataH);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ReadDataBase(HData &dataH)
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
            else if (lineData[0].toInt() == 3) buff.corpus = Body::Delta;
            else if (lineData[0].toInt() == 4) buff.corpus = Body::Gamma;
            else buff.corpus = Body::Vega;

            if (lineData[1].toInt() == 1) buff.room = RoomType::Standard;
            else if (lineData[1].toInt() == 2) buff.room = RoomType::BusinessClass;
            else if (lineData[1].toInt() == 3) buff.room = RoomType::FirstClass;
            else if (lineData[1].toInt() == 4) buff.room = RoomType::Deluxe;
            // for (int j = 2; j < 8; j++) {
            //     switch (lineData[j].toInt()) {
            //     case 1: buff.favors.push_back(SwimmingPool); break;
            //     case 2: buff.favors.push_back(Lucnh); break;
            //     case 3: buff.favors.push_back(FitnessRoom); break;
            //     case 4: buff.favors.push_back(Spa); break;
            //     case 5: buff.favors.push_back(Transport); break;
            //     case 6: buff.favors.push_back(FreeWifi); break;
            //     }
            // }
            buff.cost = lineData[8].toInt();
            n = lineData[9];
            f = lineData[10];
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
        }
    }

}

void MainWindow::on_btn_Add_clicked()
{
    AddWindow window;
    window.hdata = this->refDataH;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_btn_print_clicked()
{
    PrintWindow window;
    window.hdata = this->refDataH;
    window.printTable();
    window.setModal(true);
    window.exec();
}

