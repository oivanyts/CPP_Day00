//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#include <iostream>
#include "Cure.h"

Cure::Cure() : AMateria("cure")
{

}

Cure::~Cure()
{

}

Cure::Cure(Cure const &src) : AMateria(src)
{
	*this = src;
}

Cure &Cure::operator=(Cure const &rhs)
{
	if (&rhs != this)
	{

	}
	return *this;
}

const std::string &Cure::getType() const
{
	return AMateria::getType();
}

unsigned int Cure::getXP() const
{
	return AMateria::getXP();
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
