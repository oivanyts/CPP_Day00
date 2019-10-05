//
// Created by Oleh IVANYTSKYI on 2019-10-05.
//

#include <iostream>
#include "MiningBarge.h"

MiningBarge::MiningBarge() : count(0)
{
	for (int i = 0; i < 4; i++)
	{
		lasers[i] = nullptr;
	}
}

MiningBarge::~MiningBarge()
{

}

MiningBarge::MiningBarge(MiningBarge const &src)
{
	*this = src;
}

MiningBarge &MiningBarge::operator=(MiningBarge const &rhs)
{
	if (&rhs != this)
	{
		for (int i = 0; i < 4; ++i)
		{
			this->equip(rhs.lasers[i]);
		}
		count = rhs.count;
	}
	return *this;
}

void MiningBarge::equip(IMiningLaser *src)
{
	if (count < 4)
	{
		lasers[count++] = src;
		std::cout << "added laser" << std::endl;
	}
	else
		std::cout << "backpack is full" << std::endl;
}

void MiningBarge::mine(IAsteroid *tool) const
{
	if (!count)
	{
		std::cout << "no laser, mining " << tool->getName() << " FAIL" << std::endl;
		return ;
	}
	std::cout << "Start mining at " << tool->getName() << " asteroid" << std::endl;
	for (int i = 0; i < count; i++)
	{
		lasers[i]->mine(tool);
	}
}
