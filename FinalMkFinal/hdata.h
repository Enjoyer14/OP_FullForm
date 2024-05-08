#pragma once
#ifndef HDATA_H
#define HDATA_H
#include <QVector>
#include "Hotel.h"
class HData
{
public:
    QVector<Hotel> vecHotel;
    static void SortByBody(HData& data, int mode);
    static void SortByRoomType(HData& data, int mode); // сортировка по типу комнаты
    static void SortByCost(HData& data, int mode); // сортировка по стоимости
    static void SortByArrivalDate(HData& data, int mode); // сортировка по дате заезда

    static void SearchByRoomType(HData& data, HData& shdata, int arg); // поиск по типу комнаты
    static void SearchByFavors(HData& data, HData& shdata, int arg); // поиск по услугам
    static void SearchByDate(HData& data, HData& shdata, int d, int m, int y); // поиск по дате заезда
};

#endif // HDATA_H
