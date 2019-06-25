//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#include <iostream>
#include "HumanA.hpp"

void HumanA::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_gun.getType() <<
			  std::endl;
	return;
}

HumanA::HumanA( const std::string &name, Weapon &gun ) : _name(name), _gun
		(gun)
{
	return;
}