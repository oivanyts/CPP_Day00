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
		if (std::cin.eof() || std::cin.bad())
			return ;
		this->all[this->capacity].setField(i, ret);
	}
	this->capacity++;
	std::cout << "CONTACT UPLOADED" << std::endl;
}

void PhoneBook::mHeader( u_int8_t nFields ) const
{
	std::cout << std::endl;
	for (int k = 0; k < nFields ; ++k)
	{
		std::cout << std::setw(10);
		std::cout << this->fieldNames[k] << "|";
	}
	std::cout << std::endl;
}

void PhoneBook::mOutputOne( u_int8_t n, u_int8_t nFields, bool outputShort )
const
{
	if ( outputShort )
	{
		std::cout.flags (std::ios::right);
		std::cout << std::setw(10);
		std::cout << n + 1 << "|";
		for (u_int8_t j = 0; j < nFields; ++j)
		{
			std::cout << std::setw(10)
						<< Contact::fitField(this->all[n].getField(j))
						<< "|";
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << this->fieldNames[0] << ": " << n + 1 << std::endl;
		for (u_int8_t j = 0; j < nFields; ++j)
		{
			std::cout << this->fieldNames[j + 1] << ": ";
			std::cout <<  this->all[n].getField(j) << std::endl;
		}
	}
}

void PhoneBook::mOutput( bool allBook, u_int8_t n ) const
{
	if (allBook)
	{
		this->mHeader(4);
		for (u_int8_t i = 0; i < this->capacity; ++i)
		{
			this->mOutputOne(i, 3, true);
		}
	}
	else
	{
		this->mOutputOne(n, 11, false);
	}

}

void PhoneBook::mSearch() const
{
	u_int n;

	mOutput(true, 0);
	std::cout << "Choose index to display :" << std::endl;
	while (1)
	{
		std::cin >> n;

		if (std::cin.bad() || std::cin.eof())
		{
			return ;
		}
		else if (std::cin.fail() || !n || n > this->capacity)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
		{
			std::cin.ignore(std::numeric_limits<int>::max(),'\n');
			break;
		}
		std::cout << "cant find that index, try again:" << std::endl;
	}
	mOutput(false, n - 1);
}

void PhoneBook::manageBook()
{
	std::string	command;

	while (true)
	{
		std::cout << "Please, enter command: [ ADD | SEARCH | EXIT ]" <<
		std::endl;
		getline ( std::cin, command, '\n');
		if (!std::cin)
		{
			std::cout << "ERROR" << std::endl;
			return ;
		}
		else if ("ADD" == command)
		{
			if (this->capacity < 8)
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
			if (this->capacity)
			{
				this->mSearch();
			}
			else
			{
				std::cout << "PHONEBOOK is empty" << std::endl;
			}
		}
		else if ("EXIT" == command)
		{
			break ;
		}
	}
}
