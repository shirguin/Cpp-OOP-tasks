#pragma once
#include <list>
#include "Abonent.h"

class PhoneBook
{
public:
	PhoneBook();

	void addAbonent(Abonent abonent);
	std::list<Abonent> getAllAbonents();

private:
	int count;
	std::list<Abonent> abonents;
};

