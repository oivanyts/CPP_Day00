//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#include <iostream>
#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(Victim const &src) {
	*this = src;
}

Victim::~Victim() {
	std::cout << "Victim "
			  << _name << " just died for no apparent reason !"<< std::endl;
}

Victim &Victim::operator=(Victim const &rhs) {
	if (this != &rhs)
	{

	}
	return *this;
}

Victim::Victim(std::string const &name) : _name(name) {
	std::cout << "Some random victim called "
				<< _name << " just popped !"<< std::endl;
}

void Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep !"
				<< std::endl;
}

const std::string &Victim::getName() const {
	return _name;
}

std::ostream &operator<<(std::ostream &os, Victim const &rhs) {
	os << "I'm "<< rhs.getName() << " and I like otters !" << std::endl;
	return os;
}
