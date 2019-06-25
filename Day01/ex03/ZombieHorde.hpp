//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{

private:
	uint 	_nbZombies;
	std::string	_type;
	Zombie	**_arrayZombies;
public:

	ZombieHorde(uint nbZombies, std::string type );
	~ZombieHorde();
	void	announce() const;
};


#endif //ZOMBIEHORDE_HPP
