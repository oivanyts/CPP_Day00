//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#include <iostream>
#include "Ice.h"

Ice::Ice() : AMateria("ice")
{

}

Ice::~Ice()
{

}

Ice::Ice(Ice const &src)
{
	*this = src;
}

Ice &Ice::operator=(Ice const &rhs)
{
	if (&rhs != this)
	{
		AMateria::operator=(rhs);
	}
	return *this;
}

const std::string &Ice::getType() const
{
	return AMateria::getType();
}

unsigned int Ice::getXP() const
{
	return AMateria::getXP();
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
