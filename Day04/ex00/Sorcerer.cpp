//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title){
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src) {
	*this = src;
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title
	<< ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &rhs) {
	if ( this != &rhs)
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return *this;
}



const std::string &Sorcerer::getName() const {
	return _name;
}

const std::string &Sorcerer::getTitle() const {
	return _title;
}

void Sorcerer::polymorph(Victim const &target) const {
	target.getPolymorphed();
}


std::ostream &operator<<(std::ostream &os, Sorcerer const &rhs)
{
	os << "I am "<< rhs.getName() << ", "
				<< rhs.getTitle() << ", and I like ponies !" << std::endl;
	return os;
}
