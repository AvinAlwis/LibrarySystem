#include "Author.h"
#include "Person.h"

Author::Author(string AuthorName, string Employer, int DoBDay, int DoBMonth, int DoBYear):Person(AuthorName, DoBDay, DoBMonth, DoBYear)
{

	setEmployer(Employer);
	SetName(AuthorName);

}

Author::~Author()
{
}

void Author::AuthorPrint()
{

	cout << "\nEmployer: " << Employer_ << endl;
	PersonPrint();

}

void Author::setEmployer(string Employer)
{
	Employer_ = Employer;
}


string Author::getEmployer()
{
	return Employer_;
}
