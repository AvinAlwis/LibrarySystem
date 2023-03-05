#include "Book.h"
Book::Book(string BookName, string BookAuthor, string BookPublisher):BookAuthor_(BookAuthor), BookPublisher_(BookPublisher)
{
	SetBook(BookName, BookAuthor, BookPublisher);
}

Book::~Book()
{
}

string Book::GetBookName()
{
	return BookName_;
}

void Book::SetBookName(string BookName)
{
	BookName_ = BookName;
}

void Book::SetBook(string BookName, string BookAuthor, string BookPublisher)
{
	BookName_ = BookName;
	BookAuthor_.SetName(BookAuthor);
	BookPublisher_.SetPublisher(BookPublisher);
}

void Book::PrintBook()
{
	cout << "Book Name: " << BookName_ << "\nBook Author: " << BookAuthor_.GetName() <<
		"\nBook Publisher: " << BookPublisher_.GetPublisher();
}
