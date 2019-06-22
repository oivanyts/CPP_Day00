//
// Created by Oleh IVANYTSKYI on 2019-06-20.
//

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->capacity = 0;
	this->fieldNames[0] = "index";
	this->fieldNames[1] = "first name";
	this->fieldNames[2] = "last name";
	this->fieldNames[3] = "nickname";
	this->fieldNames[4] = "login";
	this->fieldNames[5] = "post address";
	this->fieldNames[6] = "email";
	this->fieldNames[7] = "phone number";
	this->fieldNames[8] = "birthday date";
	this->fieldNames[9] = "favorite meal";
	this->fieldNames[10] = "underwear color";
	this->fieldNames[11] = "darkest secret";
}

void PhoneBook::mAdd()
{
	std::string	ret;

	for (u_int8_t i = 0; i < 11; ++i)
	{
		std::cout << "enter field " << this->fieldNames[i + 1] << std::endl;
		std::getline (std::cin, ret);
		all[this->capacity].setField(i, ret);
	}
	this->capacity++;
	std::cout << "CONTACT UPLOADED" << std::endl;
}

void PhoneBook::mHeader( u_int8_t nFields )
{
	std::cout << std::endl;
	for (int k = 0; k < nFields ; ++k)
	{
		this->fieldNames[k].resize(10, ' ');
		std::cout << this->fieldNames[k] << "|";
	}
	std::cout << std::endl;
}

void PhoneBook::mOutputOne( u_int8_t n, u_int8_t nFields )
{
	std::cout.flags (std::ios::right);
	std::cout << std::setw(10);
	std::cout << n + 1 << "|";
	for (u_int8_t j = 0; j < nFields; ++j)
	{
		std::cout << std::setw(10);
		std::cout << this->all[n].getField(j) << "|";
	}
	std::cout << std::endl;
}

void PhoneBook::mOutput( bool allBook, u_int8_t n )
{
	if (allBook)
	{
		this->mHeader(4);
		for (u_int8_t i = 0; i < this->capacity; ++i)
		{
			this->mOutputOne(i, 3);
		}
	}
	else
	{
		this->mHeader(12);
		this->mOutputOne(n, 11);
	}

}

void PhoneBook::manageBook()
{
	std::string	command;

	while (true)
	{
		std::cout << "Please, enter command: " << std::endl;
		std::getline ( std::cin, command);
		if ("EXIT" == command)
		{
			break ;
		}
		else if ("ADD" == command)
		{
			if (this->capacity < 7)
			{
				this->mAdd();
			}
			else
			{
				std::cout << "This PHONEBOOK is full" << std::endl;
			}
		}
		else if ("SEARCH" == command)
		{
			this->mSearch();
		}
	}
}

void PhoneBook::mSearch()
{
	u_int n;

	mOutput(true, 0);
	std::cout << "Choose index to display :" << std::endl;
	while (!(std::cin >> n) || !n || n > this->capacity)
	{
		std::cout << "cant find that index, try again:" << std::endl;
		std::cin.clear();
	}
	mOutput(false, n - 1);
}
