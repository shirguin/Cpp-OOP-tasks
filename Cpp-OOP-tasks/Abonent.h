#pragma once
#include <iostream>
#include <string>

class Abonent
{
public:
	Abonent();
	Abonent(
		std::string firstName,
		std::string secondName,
		std::string lastName,
		std::string homeTelephone,
		std::string workTelephone,
		std::string mobilTelephone,
		std::string additionalInformation
	);

	void setFirstName(std::string firstName);
	void setSecondName(std::string secondName);
	void setLastName(std::string lastName);
	void setHomeTelephone(std::string homeTelephone);
	void setWorkTelephone(std::string workTelephone);
	void setMobilTelephone(std::string mobilTelephone);
	void setAdditionalInformation(std::string additionalInformation);

	void print();

	std::string getFirstName();
	std::string getSecondName();
	std::string getLastName();
	std::string getHomeTelephone();
	std::string getWorkTelephone();
	std::string getMobilTelephone();
	std::string getAdditionalInformation();

private:
	std::string _firstName;
	std::string _secondName;
	std::string _lastName;
	std::string _homeTelephone;
	std::string _workTelephone;
	std::string _mobilTelephone;
	std::string _additionalInformation;

};

