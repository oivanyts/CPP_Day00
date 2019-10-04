//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#include "Ice.h"

Ice::Ice()
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
	{}
	return *this;
}
