//
// Created by Oleh IVANYTSKYI on 2019-06-20.
//

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>

u_int8_t PhoneBook::getCapacity() const
{
	return capacity;
}

void PhoneBook::setCapacity( u_int8_t size )
{
	PhoneBook::capacity = size;
}

PhoneBook::PhoneBook()
{
	this->capacity = 0;
	this->fieldNames[0] = "first name";
	this->fieldNames[1] = "last name";
	this->fieldNames[2] = "nickname";
	this->fieldNames[3] = "login";
	this->fieldNames[4] = "postal address";
	this->fieldNames[5] = "email address";
	this->fieldNames[6] = "phone number";
	this->fieldNames[7] = "birthday date";
	this->fieldNames[8] = "favorite meal";
	this->fieldNames[9] = "underwear color";
	this->fieldNames[10] = "darkest secret";
}

void PhoneBook::mAdd()
{
	std::string	ret;

	for (int i = 0; i < 11; ++i)
	{
		std::cout << "enter field " << this->fieldNames[i] << std::endl;
		std::getline (std::cin, ret);
		all[this->capacity].setField(i, ret);
//		std::cout << "ret " << all[this->capacity].getField(i) << std::endl;
	}
	this->capacity++;
	std::cout << "CONTACT UPLOADED" << std::endl;
}

void PhoneBook::mSearch()
{

}

void PhoneBook::mExit()
{
	return ;
}

void PhoneBook::mHeader()
{
	std::cout << std::endl;
	for (int k = 0; k < 11 ; ++k)
	{
		this->fieldNames[k].resize(10, ' ');
		std::cout << this->fieldNames[k] << "|";
	}
}

void PhoneBook::mOutputOne( u_int8_t n, u_int8_t nFields )
{
	std::cout.flags (std::ios::right);
	for (int j = 0; j < nFields; ++j)
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
		for (int i = 0; i < this->capacity; ++i)
		{
			this->mOutputOne(n, 4);
		}
	}
	else
	{
		this->mOutputOne(n, 11);
	}

}

void PhoneBook::collectData( void )
{
	std::string	command;

	while (1)
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