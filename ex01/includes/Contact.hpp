//
// Created by Oleh IVANYTSKYI on 2019-06-20.
//

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {

public:

	std::string getField(u_int8_t n) const ;
	void		setField( u_int8_t n, std::string &data);
	static void	fitField(std::string &data);

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string _postalAddress;
	std::string	_emailAddress;
	std::string	_phoneNumber;
	std::string _birthdayDate;
	std::string _favoriteMeal;
	std::string _underwearColor;
	std::string	_darkestSecret;
};


#endif //CPP_DAY00_CONTACT_HPP
