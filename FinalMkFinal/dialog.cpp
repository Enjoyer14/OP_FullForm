#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btn_apply_clicked()
{
    int mode = 1;

    if(ui->radiobtn_Ascending->isChecked())
    {
        mode = 1;
    }
    else
    {
        mode = 2;
    }

    if(ui->box_choosing->currentText() == "По корпусу")
    {
        HData::SortByBody(*hdata, mode);
    }
    else if(ui->box_choosing->currentText() == "По типу комнаты")
    {
        HData::SortByRoomType(*hdata, mode);
    }
    else if(ui->box_choosing->currentText() == "По цене")
    {
        HData::SortByCost(*hdata, mode);
    }
    else if(ui->box_choosing->currentText() == "По дате бронирования")
    {
        HData::SortByArrivalDate(*hdata, mode);
    }



    this->close();
}


