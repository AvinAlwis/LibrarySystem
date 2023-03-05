#include "Person.h"
#include "Date.h"
#include <iostream>

using namespace std;

Person::Person(string PersonName, int DoBDay, int DoBMonth, int DoBYear)
{

	SetName(PersonName);
	DOB_.setDate(DoBDay, DoBMonth, DoBYear);

}

Person::~Person()
{
}

string Person::GetName()
{

	return Name;

}

void Person::SetPerson(string PersonName, int DoBDay, int DoBMonth, int DoBYear)
{
	SetName(PersonName);
	DOB_.setDate(DoBDay, DoBMonth, DoBYear);
}

void Person::PersonPrint()
{

	cout << "Name: " << GetName() << endl;

	DOB_.PrintDate();

}

void Person::SetName(string PersonName)
{

	Name = PersonName;	

}
