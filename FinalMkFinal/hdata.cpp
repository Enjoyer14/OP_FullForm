#include "hdata.h"

void HData::SortByBody(HData& data, int mode)
{
    for (int l = 0; l < data.vecHotel.size() - 1; l++) {
        for (int j = 0; j < data.vecHotel.size() - l - 1; j++) {
            if (mode == 1 && data.vecHotel[j].corpus < data.vecHotel[j + 1].corpus) {
                std::swap(data.vecHotel[j], data.vecHotel[j + 1]);
            }
            if (mode == 2 && data.vecHotel[j].corpus > data.vecHotel[j + 1].corpus) {
                std::swap(data.vecHotel[j], data.vecHotel[j + 1]);
            }
        }
    }
}

void HData::SortByRoomType(HData& data, int mode)
{
    for (int l = 0; l < data.vecHotel.size() - 1; l++) {
        for (int j = 0; j < data.vecHotel.size() - l - 1; j++) {
            if (mode == 1 && data.vecHotel[j].room < data.vecHotel[j + 1].room) {
                std::swap(data.vecHotel[j], data.vecHotel[j + 1]);
            }
            if (mode == 2 && data.vecHotel[j].room > data.vecHotel[j + 1].room) {
                std::swap(data.vecHotel[j], data.vecHotel[j + 1]);
            }
        }
    }
}

void HData::SortByArrivalDate(HData& data, int mode)
{
    for (int l = 0; l < data.vecHotel.size() - 1; l++) {
        for (int j = 0; j < data.vecHotel.size() - l - 1; j++) {
            if (mode == 2 && data.vecHotel[j].date < data.vecHotel[j + 1].date) {
                std::swap(data.vecHotel[j], data.vecHotel[j + 1]);
            }
            if (mode == 1 && data.vecHotel[j].date > data.vecHotel[j + 1].date) {
                std::swap(data.vecHotel[j], data.vecHotel[j + 1]);
            }
        }
    }
}
void HData::SortByCost(HData& data, int mode)
{
    for (int l = 0; l < data.vecHotel.size() - 1; l++) {
        for (int j = 0; j < data.vecHotel.size() - l - 1; j++) {
            if (mode == 1 && data.vecHotel[j].cost > data.vecHotel[j + 1].cost) {
                std::swap(data.vecHotel[j], data.vecHotel[j + 1]);
            }
            if (mode == 2 && data.vecHotel[j].cost < data.vecHotel[j + 1].cost) {
                std::swap(data.vecHotel[j], data.vecHotel[j + 1]);
            }
        }
    }
}

bool operator==(const Date& d1, const Date& d2)
{
    return (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year);
}
bool operator < (const Date& d1, const Date& d2) {
    if (d1.getYear() != d2.getYear()) return d1.getYear() < d2.getYear();
    if (d1.getMonth() != d2.getMonth()) return d1.getMonth() < d2.getMonth();
    return d1.getDay() < d2.getDay();
}
bool operator > (const Date& d1, const Date& d2) {
    if (d1.getYear() != d2.getYear()) return d1.getYear() > d2.getYear();
    if (d1.getMonth() != d2.getMonth()) return d1.getMonth() > d2.getMonth();
    return d1.getDay() > d2.getDay();
}



void HData::SearchByRoomType(HData& data, HData& shdata, int arg)
{
    for (int i{}; i < data.vecHotel.size(); i++)
    {
        if (data.vecHotel[i].room == arg)
        {
            shdata.vecHotel.push_back(data.vecHotel[i]);
        }
    }
}
void HData::SearchByFavors(HData& data, HData& shdata, QString arg)
{
    for (int i{}; i < data.vecHotel.size(); i++)
    {
        for (int j{}; j < data.vecHotel[i].favors.size(); j++) {
            if (data.vecHotel[i].favors[j] == 1)
            {

            }
        }
    }
}
void HData::SearchByDate(HData& data, HData& shdata)
{
    for (int i{}; i < data.vecHotel.size(); i++)
    {
        if (true)
        {

        }
    }
}
