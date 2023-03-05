#include <iostream>
#include "Time.h"

Time::Time(int Hour, int Minute, int Second)
{
	setTime(Hour, Minute, Second);
}


Time::~Time()
{
}

void Time::setHour(int Hour)
{
	hour_ = Hour;
}

void Time::setMinute(int Minute)
{
	minute_ = Minute;
}

void Time::setSecond(int Second)
{
	second_ = Second;
}

void Time::setTime(int Hour, int Minute, int Second)
{
	setSecond(Second);
	setMinute(Minute);
	setHour(Hour);
}

void Time::PrintTime()
{
	std::cout << "Hour: " << hour_ << " Minute: " << minute_ << " Second: " << second_ << std::endl;
}
