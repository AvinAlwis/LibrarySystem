#include "Publisher.h"

Publisher::Publisher(string PublisherName)
{
	SetPublisher(PublisherName);
}

Publisher::~Publisher()
{
}

void Publisher::SetPublisher(string PublisherName)
{
	PublisherName_ = PublisherName;
}

void Publisher::PrintPublisher()
{
	cout << "Publisher: " << PublisherName_;
}

string Publisher::GetPublisher()
{
	return PublisherName_;
}
