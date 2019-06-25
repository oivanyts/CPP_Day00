//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"
#include <ctime>       /* time */

class ZombieEvent
{

private:
	std::string _name;

	std::string _zombieType;

public:
	ZombieEvent( std::string type );
	void randomChump( void );
	Zombie *newZombie( std::string name );
	const std::string &getZombieType() const;
	void setZombieType( const std::string &zombieType );

};


#endif //ZOMBIEEVENT_HPP
