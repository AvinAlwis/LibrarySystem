#include "Student.h"
#include "Date.h"

Student::Student(string StudentName, string Department, int DoBDay, int DoBMonth, int DoBYear):Person(StudentName, DoBDay, DoBMonth, DoBYear)
{
	SetPerson(StudentName, DoBDay, DoBMonth, DoBYear);
	Department_ = Department;
}

Student::~Student()
{
}

void Student::SetDepartment(string Department)
{
	Department_ = Department;
}


string Student::GetDepartment()
{
	return Department_;
}

void Student::StudentPrint()
{
	cout << "Department: " << Department_ << endl;
	PersonPrint();
}
