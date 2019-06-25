//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#include <iostream>
#include "HumanB.hpp"

void HumanB::setWeapon( Weapon &weapon )
{
	_gun = &weapon;
}

void HumanB::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_gun->getType() <<
			  std::endl;

}

HumanB::HumanB( const std::string &name )
		: _name(name)
{
}
