#pragma once
#include "Date.h"
#include <vector>
#include <QFile>
#include "Date.h"
#include <QString>

enum Body {
	Alpha = 1,
	Beta,
	Vega,
	Delta,
	Gamma
};

enum RoomType {

	Standard = 1,
	BusinessClass,
	FirstClass,
	Deluxe
};

enum Service {
	SwimmingPool = 1,
	Lucnh,
	FitnessRoom,
	Spa,
	Transport,
	FreeWifi
};

class Hotel {
public:

	Hotel();

    int GetId();
    int GetCorpus();
    QString GetBody();
    QString GetRoom();
    std::vector<Service> GetFavors();
    void SetCost();
    int GetCost();
    QString GetFullName();
    QString GetPhoneNumber();
    QString GetEMail();
    QString GetDate();
    int GetNightsNumber();

    int GetFullCost();
    void SetFullCost();



    void SetCorpus(int x)
    {
        switch(x)
        {
        case 1: this->corpus = Alpha; break;
        case 2: this->corpus = Beta; break;
        case 3: this->corpus = Vega; break;
        case 4: this->corpus = Delta; break;
        case 5: this->corpus = Gamma; break;
        }
    }

    void SetTypeRoom(int x)
    {
        switch(x)
        {
        case 1: this->room = Standard; break;
        case 2: this->room = BusinessClass; break;
        case 3: this->room = FirstClass; break;
        case 4: this->room = Deluxe; break;
        }
    }

    void PrintInfo();
    static int PrintFullInfo(std::vector<Hotel>& data);
    static int AddInfo(std::vector<Hotel>& data);
    static int DeleteInfo(std::vector<Hotel>& data);

    static void ReadDataFromFile(std::vector<Hotel>& data);
    static void UpdateDataInFile(std::vector<Hotel>& data);

    static int SortByBody(std::vector<Hotel>& data);
    static int SortByRoomType(std::vector<Hotel>& data);
    static int SortByCost(std::vector<Hotel>& data);
    static int SortByName(std::vector<Hotel>& data);
    static int SortByArrivalDate(std::vector<Hotel>& data);

    static int SearchByRoomType(std::vector<Hotel>& data);
    static int SearchByFavors(std::vector<Hotel>& data);
    static int SeatchByDate(std::vector<Hotel>& data);

    int id{};
    Body corpus;
    RoomType room;
    std::vector<Service> favors;
    int cost;
    QString fullName;
    QString phoneNumber;
    QString eMail;
    Date date;
    int nightsNumber;
    int fullCost;

};

