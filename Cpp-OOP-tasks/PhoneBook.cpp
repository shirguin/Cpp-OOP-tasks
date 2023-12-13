#include "PhoneBook.h"

PhoneBook::PhoneBook()
{
	this->count = 0;
}

void PhoneBook::addAbonent(Abonent abonent)
{
	this->abonents.push_back(abonent);
	this->count++;
}

std::list<Abonent> PhoneBook::getAllAbonents()
{
	return this->abonents;
}
