#pragma once
class Time
{
public:
	Time(int Hour = 0, int Minute = 0, int Second = 0);
	~Time();
	void setHour(int Hour = 0);
	void setMinute(int Minute = 0);
	void setSecond(int Second = 0);

	void setTime(int Hour, int Minute, int Second);

	void PrintTime();

private:
	int hour_;
	int minute_;
	int second_;

};
