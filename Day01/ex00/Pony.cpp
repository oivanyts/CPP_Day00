//
// Created by Oleh IVANYTSKYI on 2019-06-24.
//

#include "Pony.hpp"
void Pony::ponyDied()
{
	std::cout << "Pony " << this->_name
				<< " died.\n Press \"F\" to pay respect" << std::endl;
}

Pony::~Pony()
{
	this->ponyDied();
	return ;
}


Pony::Pony( std::string name ) : _name(name)
{
	Pony::showPony();
	return ;
}

void Pony::showPony()
{
	std::cout << "Hello! My name is " << this->_name << std::endl;
	std::cout << ".. . . . . . . .____\n"
				 "... . . . . .__/. . \\__\n"
				 ".. . . . . . ./| .`◕ \\\n"
				 "... _——————///. . .___|\n"
				 "..///.ó. . . / . /\n"
				 ".////ó.ó.__./ . /\n"
				 ".///\\. /\\ .\\ . /\\\n"
				 ".\\| / / |.|./ /\\.\\\n"
				 "./ /_//_/ /_/./_/" << std::endl;
}

const std::string &Pony::getName() const
{
	return _name;
}




