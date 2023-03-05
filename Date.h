#pragma once
class Date
{
public:
	Date(int Day = 0, int Month = 0, int Year = 0);
	~Date();

	void setDate(int Day = 0, int Month = 0, int Year = 0);

	void setDay(int Day = 0);
	void setMonth(int Month = 0);
	void setYear(int Year = 0);

	void PrintDate();

private:
	int day_;
	int month_;
	int year_;
};

