#include "report.h"
#include "ui_report.h"

Report::Report(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Report)
{
    ui->setupUi(this);
    setWindowTitle("Моя форма");

    QFormLayout *layout = new QFormLayout(this);

    // Добавляем выбор даты
    dateEdit->setCalendarPopup(true);
    dateEdit->setDateRange(QDate(2024, 1, 1), QDate(2100, 12, 31));
    layout->addRow("Выберите дату:", dateEdit);

    // Добавляем кнопки "Да" и "Нет"
    QPushButton *yesButton = new QPushButton("Да", this);
    QPushButton *noButton = new QPushButton("Нет", this);
    layout->addRow(yesButton, noButton);

    connect(yesButton, &QPushButton::clicked, this, &Report::onYesClicked);
    connect(noButton, &QPushButton::clicked, this, &Report::onNoClicked);

    setLayout(layout);
}

Report::~Report()
{
    delete ui;
}

void Report::onYesClicked()
{
    QString title = QString::number(dateEdit->date().day()) + "-" + QString::number(dateEdit->date().month()) + "-" + QString::number(dateEdit->date().year()) + ".txt";

    QFile file(title);

    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream(&file);

        for(int i = 0; i < hdata->vecHotel.size(); i++)
        {
            if(hdata->vecHotel[i].date.getDay() == dateEdit->date().day() &&
                hdata->vecHotel[i].date.getMonth() == dateEdit->date().month() &&
                hdata->vecHotel[i].date.getYear() == dateEdit->date().year())
            {

                stream << "Корпус: " << hdata->vecHotel[i].corpus << '\n'
                    << "Тип комнаты " << hdata->vecHotel[i].room << '\n'
                       << "Услуги: ";

                for(int j = 0; j < hdata->vecHotel[i].favors.size(); j++)
                {
                    if(j != 0){stream << ", ";}
                    if(hdata->vecHotel[i].favors[j] == 1)
                    {
                        stream << "Бассейн";
                    }
                    if(hdata->vecHotel[i].favors[j] == 2)
                    {
                        stream << "Завтрак/Обед";
                    }
                    if(hdata->vecHotel[i].favors[j] == 3)
                    {
                        stream << "Фитнесс-зал";
                    }
                    if(hdata->vecHotel[i].favors[j] == 4)
                    {
                        stream << "Спа";
                    }
                    if(hdata->vecHotel[i].favors[j] == 5)
                    {
                        stream << "Транспорт";
                    }
                    if(hdata->vecHotel[i].favors[j] == 6)
                    {
                        stream << "Wifi";
                    }
                }
                stream << "\nСтоимость 1 ночи: " <<hdata->vecHotel[i].cost << '\n'
                    << "ФИО: " << hdata->vecHotel[i].fullName << '\n'
                    << "Номер телефона: " << hdata->vecHotel[i].phoneNumber << '\n'
                    << "E-Mail: " << hdata->vecHotel[i].eMail << '\n'
                    << "Дата заезда: " << hdata->vecHotel[i].date.getDay() << "."
                       << hdata->vecHotel[i].date.getMonth() << "."
                       << hdata->vecHotel[i].date.getYear() << '\n'
                    << "Количество ночей: " << hdata->vecHotel[i].nightsNumber << '\n'
                    << "Полная стоимость: " << hdata->vecHotel[i].fullCost << '\n'
                       << "--------------------------------------------------------------------------------------------------\n";
            }
        }

    }
    file.close();
    this->close();
}

void Report::onNoClicked()
{
    this->close();
}
