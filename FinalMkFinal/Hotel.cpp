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

std::vector<Service> Hotel::GetFavors()
{
	return this->favors;
}

int Hotel::GetCost()
{
	return this->cost;
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




