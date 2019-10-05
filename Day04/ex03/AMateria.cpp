//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#include "AMateria.h"

AMateria::AMateria()
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(AMateria const &src) : xp_(0),type_(src.type_)
{
	*this = src;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	if (&rhs != this)
	{
		xp_ = rhs.xp_;
		type_ = rhs.type_;
	}
	return *this;
}

AMateria::AMateria(std::string const &type) : xp_(0), type_(const_cast<std::string &>(type))
{

}

std::string const &AMateria::getType() const
{
	return type_;
}

unsigned int AMateria::getXP() const
{
	return xp_;
}

void AMateria::use(ICharacter &)
{
	xp_ += 10;
}
