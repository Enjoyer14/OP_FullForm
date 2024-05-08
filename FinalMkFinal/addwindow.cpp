#include "addwindow.h"
#include "ui_addwindow.h"
#include <QMessageBox>

AddWindow::AddWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddWindow)
{
    ui->setupUi(this);
}

AddWindow::~AddWindow()
{
    delete ui;
}

void AddWindow::on_btn_Add_clicked()
{

    Hotel buff;

    buff.id = hdata->vecHotel.size()+1;

    switch(ui->box_Corpus->currentIndex()+1)
    {
    case 1: buff.SetCorpus(1); break;
    case 2: buff.SetCorpus(2); break;
    case 3: buff.SetCorpus(3); break;
    case 4: buff.SetCorpus(4); break;
    case 5: buff.SetCorpus(5); break;
    }

    switch(ui->box_TypeRoom->currentIndex()+1)
    {
    case 1: buff.SetTypeRoom(1); break;
    case 2: buff.SetTypeRoom(2); break;
    case 3: buff.SetTypeRoom(3); break;
    case 4: buff.SetTypeRoom(4); break;
    }

    if(ui->checkBox_Pool->isChecked()){buff.favors.push_back(Service::SwimmingPool);}
    if(ui->checkBox_Lunch->isChecked()){buff.favors.push_back(Service::Lucnh);}
    if(ui->checkBox_Fitness->isChecked()){buff.favors.push_back(Service::FitnessRoom);}
    if(ui->checkBox_Spa->isChecked()){buff.favors.push_back(Service::Spa);}
    if(ui->checkBox_Transport->isChecked()){ buff.favors.push_back(Service::Transport);}
    if(ui->checkBox_Wifi->isChecked()) {buff.favors.push_back(Service::FreeWifi);}

    if(ui->lineEdit_FIO->text().isEmpty())
    {
        ui->lineEdit_FIO->setText("-");
    }
    if(ui->lineEdit_Name->text().isEmpty())
    {
        ui->lineEdit_Name->setText("-");
    }
    if(ui->lineEdit_FatherName->text().isEmpty())
    {
        ui->lineEdit_FatherName->setText("-");
    }

    if(ui->lineEdit_PhoneNumber->text().isEmpty())
    {
        ui->lineEdit_PhoneNumber->setText("-");
    }
    if(ui->lineEdit_Email->text().isEmpty())
    {
        ui->lineEdit_Email->setText("-");
    }

    buff.fullName = ui->lineEdit_FIO->text() + " " + ui->lineEdit_Name->text() + " " + ui->lineEdit_FatherName->text();
    buff.cost = ui->lineEdit_Cost->text().toInt();
    buff.eMail = ui->lineEdit_Email->text();
    buff.phoneNumber = ui->lineEdit_PhoneNumber->text();
    buff.nightsNumber = ui->lineEdit_NightCount->text().toInt();

    buff.fullCost = ((buff.cost*buff.nightsNumber) + (buff.favors.size() * 1000));

    buff.date.setDate(ui->dateEdit->date().day(), ui->dateEdit->date().month(), ui->dateEdit->date().year());


    hdata->vecHotel.push_back(buff);

    this->close();

}

