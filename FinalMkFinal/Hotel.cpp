#include "Hotel.h"

int getValue()
{
	int a{};
	while (true)
	{
		std::cin >> a;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else
			return a;
	}
}

Hotel::Hotel()
{

}

int Hotel::GetId()
{
	return this->id;
}

int Hotel::GetCorpus()
{
    return this->corpus;
}

int Hotel::GetCost()
{
    return this->cost;
}

std::vector<Service> Hotel::GetFavors()
{
	return this->favors;
}

void Hotel::SetCost()
{
    switch(this->corpus)
    {
    case 1:
        if(this->room == 1) this->cost = 3400;
        else if(this->room == 2) this->cost = 4700;
        else if(this->room == 3) this->cost = 6700;
        else if(this->room == 4) this->cost = 7300;
        break;
    case 2:
        if(this->room == 1) this->cost = 3200;
        else if(this->room == 2) this->cost = 3700;
        else if(this->room == 3) this->cost = 4500;
        else if(this->room == 4) this->cost = 7000;
        break;
    case 5:
        if(this->room == 1) this->cost = 4000;
        else if(this->room == 2) this->cost = 4600;
        else if(this->room == 3) this->cost = 5000;
        else if(this->room == 4) this->cost = 7700;
        break;
    case 4:
        if(this->room == 1) this->cost = 5400;
        else if(this->room == 2) this->cost = 6100;
        else if(this->room == 3) this->cost = 6800;
        else if(this->room == 4) this->cost = 10000;
        break;
    case 3:
        if(this->room == 1) this->cost = 3700;
        else if(this->room == 2) this->cost = 4800;
        else if(this->room == 3) this->cost = 6000;
        else if(this->room == 4) this->cost = 12000;
        break;
    }
}

QString Hotel::GetFullName()
{
	return this->fullName;
}

QString Hotel::GetBody()
{
    switch(this->corpus)
    {
    case 1: return (QString)"Альфа";
    case 2: return (QString)"Бета";
    case 3: return (QString)"Вега";
    case 4: return (QString)"Дельта";
    case 5: return (QString)"Гамма";
    }
}

QString Hotel::GetRoom()
{
    switch(this->room)
    {
    case 1: return (QString)"Стандарт";
    case 2: return (QString)"Бизнесс-класс";
    case 3: return (QString)"Первый-класс";
    case 4: return (QString)"Делюкс";
    }
}

QString Hotel::GetPhoneNumber()
{
	return this->phoneNumber;
}

QString Hotel::GetEMail()
{
	return this->eMail;
}

QString Hotel::GetDate()
{
    return QString::number(this->date.getDay()) + "." + QString::number(this->date.getMonth()) + "." + QString::number(this->date.getYear());
}

int Hotel::GetNightsNumber()
{
	return this->nightsNumber;
}

int Hotel::GetFullCost()
{
	return this->fullCost;
}

void Hotel::SetFullCost()
{
    int fullPrice = 0;
    for(int i = 0; i < this->favors.size(); i++)
    {
        if(this->favors[i] == Service::SwimmingPool) fullPrice += (1200 * this->nightsNumber);
        else if(this->favors[i] == Service::Lucnh) fullPrice += (1500 * this->nightsNumber);
        else if(this->favors[i] == Service::FitnessRoom) fullPrice += (600 * this->nightsNumber);
        else if(this->favors[i] == Service::Spa) fullPrice += (2000 * this->nightsNumber);
        else if(this->favors[i] == Service::Transport) fullPrice += (700 * this->nightsNumber);
        else if(this->favors[i] == Service::FreeWifi) fullPrice += (350 * this->nightsNumber);
    }

    fullPrice += (this->cost * this->nightsNumber);
    this->fullCost = fullPrice;
}




