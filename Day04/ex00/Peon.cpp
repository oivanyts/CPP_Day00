//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#include <iostream>
#include "Peon.hpp"

Peon::Peon() {}

Peon::Peon(Peon const &src) {
	*this = src;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(std::string const &name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(Peon const &rhs) {
	if ( this != &rhs)
	{

	}
	return *this;
}

void Peon::getPolymorphed() const {
	std::cout << _name << " has been turned into a pink pony !"
			  << std::endl;
}