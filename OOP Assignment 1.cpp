// OOP Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Author.h"
#include "Person.h"
#include "Student.h"
#include "Date.h"
#include "Time.h"
#include "Book.h"
#include "Borrow.h"
using namespace std;

int main()
{
    //Person Person1("Avin", 8, 3, 2001);
    //cout << "Person Details\n";
    //Person1.PersonPrint();
    //cout << endl << endl;

    Publisher Publisher1("Brockhampton Press");
    cout << "Publisher:\n";
    Publisher1.PrintPublisher();
    cout << endl << endl;

    Student Student1("Avin Alwis", "Computing", 8, 3, 2001);
    cout << "Student Details:\n";
    Student1.StudentPrint();
    cout << endl << endl;

    Author Author1("William Shakespeare", "Employer", 23, 4, 1616);
    cout << "Author Details:";
    Author1.AuthorPrint();
    cout << endl << endl;




    //Date Date1(31, 6, 2020);
    //cout << "Date:\n";
    //Date1.PrintDate();
    //cout << endl << endl;

    //Time Time1(7, 23, 36);
    //cout << "Time:\n";
    //Time1.PrintTime();
    //cout << endl << endl;

    //Book Book1("The Secret Seven", "Enid Blyton", "Brockhampton Press");
    //cout << "Book:\n";
    //Book1.PrintBook();
    //cout << endl << endl;

    //cout << "Borrow:\n";
    //Borrow Borrow1("The Alchemist", "Paulo Coelho",
    //    "HarperCollins", "Avin Alwis", 20, 11,
    //    2019, 10, 20, 34, 27, 11, 2019);
    //Borrow1.BorrowPrint();

}

