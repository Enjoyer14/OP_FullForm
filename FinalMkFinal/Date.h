#pragma once
#include <iostream>
#include <string>

class Date
{
public:
    Date(int d = 0, int m = 0, int y = 0);
    ~Date();

    int getDay() const;

    int getMonth() const;

    int getYear() const;

    void setDay(int day);

    void setMonth(int month);

    void setYear(int year);

    void setDate(int day, int month, int year);

    void PrintDate() const;
    std::string GetFullDate();

    friend bool operator == (const Date& d1, const Date& d2);

    friend bool operator < (const Date& d1, const Date& d2);
    friend bool operator > (const Date& d1, const Date& d2);

private:
    int day;
    int month;
    int year;
};
