//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#include "Zombie.hpp"

std::string Zombie::_randomNames[10] = {
		"BITER",
		"COLD BODIE",
		"CREEPER",
		"DEAD ONE",
		"FLOATER",
		"SKIN EATER",
		"LAMEBRAIN",
		"LURKERS",
		"MONSTER",
		"ROAMER"
};

void Zombie::announce() const
{
	std::cout << "<"<< this->_name << " ("
				<< this->_type  << ")>"<< " Braiiiiinnnssss...." <<
	std::endl;
}

Zombie::Zombie( std::string name , std::string type) : _name(name), _type(type)
{
	std::cout << this->_name << " spawned for " << this->_type << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " from " << this->_type << " died" << std::endl;
	return ;
}

std::string &Zombie::getRandomNames(u_int8_t n)
{
	return _randomNames[n];
}