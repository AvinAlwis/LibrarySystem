#include <iostream>
#include "Borrow.h"
using namespace std;


Borrow::Borrow(string BookName, string BookAuthor, string BookPublisher, string StudentName, 
	int BorrowDay, int BorrowMonth, int BorrowYear, 
	int BorrowHour, int BorrowMinute, int BorrowSecond, int DueDay, 
	int DueMonth, int DueYear): StudentName_ (StudentName), BorrowDate_(BorrowDay, BorrowMonth,
		BorrowYear), BorrowTime_(BorrowHour, BorrowMinute, BorrowSecond), DueDate_(DueDay, DueMonth, DueYear)
{

	Book::SetBook(BookName,BookAuthor,BookPublisher);
	StudentName_.SetName(StudentName);
	BorrowDate_.setDate(BorrowDay, BorrowMonth, BorrowYear);
	BorrowTime_.setTime(BorrowHour, BorrowMinute, BorrowSecond);
	DueDate_.setDate(DueDay, DueMonth, DueYear);

}

Borrow::~Borrow()
{
}

void Borrow::BorrowPrint()
{

	cout << "Student Name: " << StudentName_.GetName() << endl;
	cout << "Borrow Date: ";
	BorrowDate_.PrintDate();
	cout << "Borrow Time: ";
	BorrowTime_.PrintTime();
	cout << "Due Date: ";
	DueDate_.PrintDate();
	cout << "Book Borrowed: ";
	Book::PrintBook();

}
