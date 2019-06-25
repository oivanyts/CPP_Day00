//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#include "Brain.hpp"

std::string Brain::identify() const
{
	std::string ret = this->address.str();
	for (u_long i   = 2; i < ret.size(); i++)
	{
		ret[i] = toupper(ret[i]);
	}
	return ret;
}

Brain::Brain() : _mass(sizeof(Brain))
{
	this->address << this;
}

Brain::~Brain()
{

}

uint Brain::getMass() const
{
	return _mass;
}
