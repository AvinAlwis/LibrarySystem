#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

class Author:public Person{
public:
	Author(string AuthorName = "Not Set", string Employer = "Not Set" , int DoBDay = 0, 
		int DoBMonth = 0, int DoBYear = 0);
	~Author();
	void AuthorPrint();
	void setEmployer(string Employer);
	string getEmployer();

private:
	string Employer_;

};

