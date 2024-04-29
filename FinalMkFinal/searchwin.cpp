#include "searchwin.h"
#include "ui_searchwin.h"

SearchWin::SearchWin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchWin)
{
    ui->setupUi(this);
    ui->time->hide();
}
SearchWin::~SearchWin()
{
    delete ui;
}



void SearchWin::on_box_choosing_type_currentTextChanged()
{
    if(ui->box_choosing_type->currentIndex() == 0)
    {
        ui->time->hide();
        ui->box_choosing_direct->show();
        ui->box_choosing_direct->clear();
        ui->box_choosing_direct->addItem("Стандарт");
        ui->box_choosing_direct->addItem("Бизнесс класс");
        ui->box_choosing_direct->addItem("Первый класс");
        ui->box_choosing_direct->addItem("Делюкс");
    }

    if(ui->box_choosing_type->currentIndex() == 1)
    {
        ui->time->hide();
        ui->box_choosing_direct->show();
        ui->box_choosing_direct->clear();
        ui->box_choosing_direct->addItem("Бассейн");
        ui->box_choosing_direct->addItem("Завтрак/Обед");
        ui->box_choosing_direct->addItem("Фитнесс зал");
        ui->box_choosing_direct->addItem("Спа");
        ui->box_choosing_direct->addItem("Транспорт");
        ui->box_choosing_direct->addItem("Wifi");
    }

    if(ui->box_choosing_type->currentIndex() == 2)
    {
        ui->box_choosing_direct->clear();
        ui->box_choosing_direct->hide();
        ui->time->show();
    }
}


void SearchWin::on_btn_apply_clicked()
{
    if(ui->box_choosing_type->currentIndex() == 0)
    {
        HData::SearchByRoomType(*hdata, *shdata, ui->box_choosing_direct->currentIndex()+1);
    }

    if(ui->box_choosing_type->currentIndex() == 1)
    {

    }

    if(ui->box_choosing_type->currentIndex() == 2)
    {

    }
    this->close();
}

