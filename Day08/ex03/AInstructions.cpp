//
// Created by Oleh IVANYTSKYI on 2019-10-11.
//

#include "AInstructions.h"

AInstructions::AInstructions() : ptr(0)
{

}

AInstructions::~AInstructions()
{

}

AInstructions::AInstructions(AInstructions const &src)
{
	*this = src;
}

AInstructions &AInstructions::operator=(AInstructions const &rhs)
{
	if (&rhs != this)
	{
		ptr = rhs.ptr;
	}
	return *this;
}
