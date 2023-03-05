#include "Date.h"
#include <iostream>

using namespace std;


Date::Date(int Day, int Month, int Year)
{
	setDay(Day);
	setMonth(Month);
	setYear(Year);
}

Date::~Date()
{
}

void Date::setDate(int Day, int Month, int Year)
{
	setDay(Day);
	setMonth(Month);
	setYear(Year);
}

void Date::setDay(int Day)
{
	day_ = Day;
}

void Date::setMonth(int Month)
{
	month_ = Month;
}

void Date::setYear(int Year)
{
	year_ = Year;
}

void Date::PrintDate()
{
	cout << "Day: " << day_ << " Month: " << month_ << " Year: " << year_ << endl;
}
