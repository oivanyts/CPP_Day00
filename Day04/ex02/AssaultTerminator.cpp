//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#include <iostream>
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src) {
	*this = src;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &rhs) {
	if (this != &rhs) // add coping inside if
	{
		return *this;
	}
	return *this;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back ..." << std::endl;
}

ISpaceMarine	*AssaultTerminator::clone()const {
	return new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry()const {
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack() const{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const{
	std::cout << "* attacks with chainfists *" << std::endl;
}
