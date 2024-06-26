#include "addwindow.h"
#include "ui_addwindow.h"
#include <QMessageBox>

AddWindow::AddWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddWindow)
{
    ui->setupUi(this);
    ui->lineEdit_PhoneNumber->setValidator(new QDoubleValidator(0,1000000000000000,0,this));
    ui->lineEdit_NightCount->setValidator(new QIntValidator(1, 100, this));
    setWindowIcon(QIcon("addicon.png"));
    this->setStyleSheet("background-color: rgb(244, 240, 247);");

    ui->lineEdit_FIO->setStyleSheet(
        "QLineEdit {"
        "   color: rgb(0, 0, 0);"
        "   background-color: rgb(225, 216, 232);"
        "   border: 2px solid rgb(166, 166, 166);"
        "}"
        );
    ui->lineEdit_Name->setStyleSheet(
        "QLineEdit {"
        "   color: rgb(0, 0, 0);"
        "   background-color: rgb(225, 216, 232);"
        "   border: 2px solid rgb(166, 166, 166);"
        "}"
        );
    ui->lineEdit_FatherName->setStyleSheet(
        "QLineEdit {"
        "   color: rgb(0, 0, 0);"
        "   background-color: rgb(225, 216, 232);"
        "   border: 2px solid rgb(166, 166, 166);"
        "}"
        );
    ui->lineEdit_Email->setStyleSheet(
        "QLineEdit {"
        "   color: rgb(0, 0, 0);"
        "   background-color: rgb(225, 216, 232);"
        "   border: 2px solid rgb(166, 166, 166);"
        "}"
        );
    ui->lineEdit_NightCount->setStyleSheet(
        "QLineEdit {"
        "   color: rgb(0, 0, 0);"
        "   background-color: rgb(225, 216, 232);"
        "   border: 2px solid rgb(166, 166, 166);"
        "}"
        );
    ui->lineEdit_PhoneNumber->setStyleSheet(
        "QLineEdit {"
        "   color: rgb(0, 0, 0);"
        "   background-color: rgb(225, 216, 232);"
        "   border: 2px solid rgb(166, 166, 166);"
        "}"
        );

    ui->dateEdit->setMinimumDate(QDate::currentDate());
}
AddWindow::~AddWindow()
{
    delete ui;
}

bool isNumber(const QString &str) {
    bool ok;
    str.toLongLong(&ok);
    return ok;
}

void AddWindow::on_btn_Add_clicked()
{
    Hotel buff;
    bool isCorrect;

    isCorrect = true;

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
        isCorrect = false;
        ui->label_f->setStyleSheet("color: red;");
        ui->label_isCorrect->setText("Введите фамилию!");
    }
    else
    {
        ui->label_f->setStyleSheet("color: black;");
    }

    if(ui->lineEdit_Name->text().isEmpty())
    {
        isCorrect = false;
        ui->label_n->setStyleSheet("color: red;");
        ui->label_isCorrect->setText("Введите имя!");
    }
    else
    {
        ui->label_n->setStyleSheet("color: black;");
    }

    if(ui->lineEdit_FatherName->text().isEmpty())
    {
        ui->lineEdit_FatherName->setText("-");
    }

    if(ui->lineEdit_PhoneNumber->text().isEmpty())
    {
        isCorrect = false;
        ui->label_phone->setStyleSheet("color: red;");
    }
    else
    {
        ui->label_phone->setStyleSheet("color: black;");
    }

    buff.fullName = ui->lineEdit_FIO->text().remove(QChar::Space) + " " + ui->lineEdit_Name->text().remove(QChar::Space) + " " + ui->lineEdit_FatherName->text().remove(QChar::Space);

    // if (isNumber(ui->lineEdit_Cost->text()))
    // {
    //     buff.cost = ui->lineEdit_Cost->text().toInt();
    //     ui->label_cost->setStyleSheet("color: black;");
    // }
    // else
    // {
    //     isCorrect = false;
    //     ui->label_cost->setStyleSheet("color: red;");
    // }

    buff.SetCost();

    ui->label_Cost->setText(QString::number(buff.cost));

    if (isNumber(ui->lineEdit_PhoneNumber->text()) && ui->lineEdit_PhoneNumber->text().toLongLong() > 79000000000)
    {
        buff.phoneNumber = ui->lineEdit_PhoneNumber->text();
        ui->label_phone->setStyleSheet("color: black;");
    }
    else
    {
        isCorrect = false;
        ui->label_phone->setStyleSheet("color: red;");
    }

    if (isNumber(ui->lineEdit_NightCount->text()))
    {
        buff.nightsNumber = ui->lineEdit_NightCount->text().toInt();
        ui->label_nights->setStyleSheet("color: black;");
    }
    else
    {
        isCorrect = false;
        ui->label_nights->setStyleSheet("color: red;");
    }

    if(ui->lineEdit_Email->text().indexOf("@") > 0)
    {
        buff.eMail = ui->lineEdit_Email->text().remove(QChar::Space);
        ui->label_mail->setStyleSheet("color: black;");
    }
    else
    {
        isCorrect = false;
        ui->label_mail->setStyleSheet("color: red;");
    }

    buff.date.setDate(ui->dateEdit->date().day(), ui->dateEdit->date().month(), ui->dateEdit->date().year());


    if(isCorrect)
    {
        buff.SetFullCost();
        hdata->vecHotel.push_back(buff);
        this->close();
    }
    else
    {
     ui->label_isCorrect->setText("Неправильные значения!");
    }

}


void AddWindow::on_box_TypeRoom_currentIndexChanged(int index)
{
    ui->label_Cost->clear();
    Hotel buff;
    buff.SetCorpus(ui->box_Corpus->currentIndex()+1);
    buff.SetTypeRoom(index + 1);
    buff.SetCost();
    ui->label_Cost->setText(QString::number(buff.cost));
}


void AddWindow::on_box_Corpus_currentIndexChanged(int index)
{
    ui->label_Cost->clear();
    Hotel buff;
    buff.SetCorpus(index+1);
    buff.SetTypeRoom(ui->box_TypeRoom->currentIndex() + 1);
    buff.SetCost();
    ui->label_Cost->setText(QString::number(buff.cost));
}



