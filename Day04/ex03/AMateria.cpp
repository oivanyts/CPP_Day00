//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#include "AMateria.h"
#include "ICharacter.h"

AMateria::AMateria() : xp_(0), type_((std::string &)"")
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
	return 0;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	xp_ += 10;
}
