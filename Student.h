#pragma once
#include "Person.h"

class Student:public Person
{
public:
	Student(string Name = "Not Set", string Department = "Not Set", int DoBDay = 0, int DoBMonth = 0, int DoBYear = 0);
	~Student();
	void SetDepartment(string Department);
	string GetDepartment();
	void StudentPrint();

private:
	string Department_;

};

