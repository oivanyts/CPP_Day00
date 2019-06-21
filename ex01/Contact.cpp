//
// Created by Oleh IVANYTSKYI on 2019-06-20.
//

#include "Contact.hpp"


void	Contact::setField( u_int8_t n, std::string &data)
{
	fitField(data);
	switch (n)
	{
		case 0:
			this->_firstName = data;
			break ;
		case 1:
			this->_lastName = data;
			break ;
		case 2:
			this->_nickname = data;
			break ;
		case 3:
			this->_login = data;
			break ;
		case 4:
			this->_postalAddress = data;
			break ;
		case 5:
			this->_emailAddress = data;
			break ;
		case 6:
			this->_phoneNumber = data;
			break ;
		case 7:
			this->_birthdayDate = data;
			break ;
		case 8:
			this->_favoriteMeal = data;
			break ;
		case 9:
			this->_underwearColor = data;
			break ;
		case 10:
			this->_darkestSecret = data;
			break ;
		default:
			return ;
	}
}
std::string Contact::getField(uint8_t n)
{
	switch (n)
	{
		case 0:
			return this->_firstName;
		case 1:
			return this->_lastName;
		case 2:
			return this->_nickname;
		case 3:
			return this->_login;
		case 4:
			return this->_postalAddress;
		case 5:
			return this->_emailAddress;
		case 6:
			return this->_phoneNumber;
		case 7:
			return this->_birthdayDate;
		case 8:
			return this->_favoriteMeal;
		case 9:
			return this->_underwearColor;
		case 10:
			return this->_darkestSecret;
		default:
			return "";
	}
}

void Contact::fitField( std::string &data )
{
	if (data.length() > 10)
		data.insert(9,1,'.');
	if (data.length() >= 10)
		data.resize(10);
}
