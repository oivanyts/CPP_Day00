//
// Created by Oleh IVANYTSKYI on 2019-10-05.
//

#include <iostream>
#include "DeepCoreMiner.h"

DeepCoreMiner::DeepCoreMiner() : name_("DeepCoreMiner")
{

}

DeepCoreMiner::~DeepCoreMiner()
{

}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &src)
{
	*this = src;
}

DeepCoreMiner &DeepCoreMiner::operator=(DeepCoreMiner const &rhs)
{
	if (&rhs != this)
	{}
	return *this;
}

void DeepCoreMiner::mine(IAsteroid *asteroid)
{
	std::cout << "* strip mining " << name_ <<  " got "  << asteroid->beMined(this) << " ! *" << std::endl;
}
