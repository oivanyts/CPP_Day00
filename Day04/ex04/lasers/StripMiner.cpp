//
// Created by Oleh IVANYTSKYI on 2019-10-05.
//

#include <iostream>
#include "StripMiner.h"

StripMiner::StripMiner() : name_("StripMiner")
{

}

StripMiner::~StripMiner()
{

}

StripMiner::StripMiner(StripMiner const &src)
{
	*this = src;
}

StripMiner &StripMiner::operator=(StripMiner const &rhs)
{
	if (&rhs != this)
	{}
	return *this;
}

void StripMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* strip mining " << name_ << " got " << asteroid->beMined(this) << " ! *" << std::endl;

}
