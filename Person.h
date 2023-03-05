#pragma once
#include <iostream>
#include "Date.h"
using namespace std;

class Person
{
public:

	Person(string PersonName = "Not Set", int DoBDay = 0, int DoBMonth = 0, int DoBYear = 0);
	~Person();
	string GetName();
	void SetPerson(string PersonName, int DoBDay, int DoBMonth, int DoBYear);
	void PersonPrint();
	void SetName(string PersonName);

private:
	string Name;
	Date DOB_;
};

