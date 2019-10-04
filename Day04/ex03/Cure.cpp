//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#include "Cure.h"

Cure::Cure()
{

}

Cure::~Cure()
{

}

Cure::Cure(Cure const &src)
{
	*this = src;
}

Cure &Cure::operator=(Cure const &rhs)
{
	if (&rhs != this)
	{}
	return *this;
}
