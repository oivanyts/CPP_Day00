//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( uint nbZombies, std::string type ) : _nbZombies
																	   (nbZombies),
															   _type(type)
{
	srand(time(NULL));
	this->_arrayZombies = new Zombie *[nbZombies];
	for (uint i = 0; i < nbZombies; i++)
	{
		this->_arrayZombies[i] =
				new Zombie(Zombie::getRandomNames(rand() % 9), _type);
	}

}

ZombieHorde::~ZombieHorde()
{
	for (uint i = 0; i < _nbZombies; i++)
	{
		std::cout << this->_arrayZombies[i]->getName() << " goes to HELL" <<
				  std::endl;
		delete (this->_arrayZombies[i]);
	}
	std::cout << "Last from " << this->_type << " defeated. Now it's gone" <<
			  std::endl;
	delete (this->_arrayZombies);
}

void ZombieHorde::announce() const
{
	for (uint i = 0; i < _nbZombies; i++)
	{
		this->_arrayZombies[i]->announce();
	}
}
