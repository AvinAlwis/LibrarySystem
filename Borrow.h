#pragma once
#include "Book.h"
#include "Date.h"
#include "Student.h"
#include "Time.h"

class Borrow:public Book	//Inheriting the book class since, when borrowing, we need to store as much
							//information as possible about the borrowed book in a typical library borrow
							//system. As well as allow the librarian to access all functions.
{
public:
	Borrow(string BookName, string BookAuthor, string BookPublisher, string StudentName,
		int BorrowDay, int BorrowMonth, int BorrowYear,	int BorrowHour, int BorrowMinute,
		int BorrowSecond, int DueDay, int DueMonth, int DueYear); //Constructor
	~Borrow();
	void BorrowPrint();

private:
	Student StudentName_;	//To store the student that borrowed the book
	Date BorrowDate_;		//To store the borrow date of the book
	Time BorrowTime_;		//To store the borrow time of the book
	Date DueDate_;			//To store the date at which the book is due to be returned
};

