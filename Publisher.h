#pragma once
#include <iostream>
using namespace std;

class Publisher
{

public:
	Publisher(string PublisherName = "Not Set");
	~Publisher();
	void SetPublisher(string PublisherName);
	void PrintPublisher();
	string GetPublisher();

private:
	string PublisherName_;
};

