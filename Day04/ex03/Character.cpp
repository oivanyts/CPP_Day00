//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#include "Character.h"

Character::Character()
{

}

Character::~Character()
{

}

Character::Character(Character const &src)
{
	*this = src;
}

Character &Character::operator=(Character const &rhs)
{
	if (&rhs != this)
	{}
	return *this;
}
