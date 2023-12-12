#include "Abonent.h"

Abonent::Abonent()
{
	this->_firstName = "";
	this->_secondName = "";
	this->_lastName = "";
	this->_homeTelephone = "";
	this->_workTelephone = "";
	this->_mobilTelephone = "";
	this->_additionalInformation = "";
}

void Abonent::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void Abonent::setSecondName(std::string secondName)
{
	this->_secondName = secondName;
}

void Abonent::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void Abonent::setHomeTelephone(std::string homeTelephone)
{
	this->_homeTelephone = homeTelephone;
}

void Abonent::setWorkTelephone(std::string workTelephone)
{
	this->_workTelephone = workTelephone;
}

void Abonent::setMobilTelephone(std::string mobilTelephone)
{
	this->_mobilTelephone = mobilTelephone;
}

void Abonent::setAdditionalInformation(std::string additionalInformation)
{
	this->_additionalInformation = additionalInformation;
}

std::string Abonent::getFirstName()
{
	return this->_firstName;
}

std::string Abonent::getSecondName()
{
	return this->_secondName;
}

std::string Abonent::getLastName()
{
	return this->_lastName;
}

std::string Abonent::getHomeTelephone()
{
	return this->_homeTelephone;
}

std::string Abonent::getWorkTelephone()
{
	return this->_workTelephone;
}

std::string Abonent::getMobilTelephone()
{
	return this->_mobilTelephone;
}

std::string Abonent::getAdditionalInformation()
{
	return this->_additionalInformation;
}
