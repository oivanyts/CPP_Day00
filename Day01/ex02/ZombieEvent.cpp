//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#include "ZombieEvent.hpp"

const std::string &ZombieEvent::getZombieType() const
{
	return _zombieType;
}

void ZombieEvent::setZombieType( const std::string &zombieType )
{
	ZombieEvent::_zombieType = zombieType;
}



Zombie *ZombieEvent::newZombie( std::string name )
{
	return new Zombie(name, this->_zombieType);
}

void ZombieEvent::randomChump( void )
{
	std::string &newName = Zombie::getRandomNames(rand()% 9);
	Zombie	dead(newName, this->_zombieType);

	dead.announce();
	return ;
}

ZombieEvent::ZombieEvent( std::string type ) : _zombieType(type)
{
	return ;
}
