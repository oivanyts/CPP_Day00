//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#include <iostream>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const &name) : NinjaTrap() , FragTrap() {
	_name = name;
	std::cout << " Supertrap : " << _name << " created" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &src){
	*this = src;
}

SuperTrap::SuperTrap() : NinjaTrap() , FragTrap()
{
	_name = "SuperDef";
	std::cout << " Supertrap : " << _name << " created" << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Destructor Called: [SuperTrap] " << _name << std::endl;
}
