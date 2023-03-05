#pragma once
#include "Author.h"
#include "Publisher.h"

class Book
{
public:
	Book(string BookName = "Not Set", string BookAuthor = "Not Set", string BookPublisher = "Not Set");
	~Book();
	string GetBookName();
	void SetBookName(string BookName);
	void SetBook(string BookName, string BookAuthor, string BookPublisher);
	void PrintBook();

private:
	string BookName_;			//String to store the name of the book
	Author BookAuthor_;			//Storing the author of the book
	Publisher BookPublisher_;	//Storing the publisher of the book
};

