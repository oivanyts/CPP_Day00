//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 1, 100, 100, 100, 100, 30, 20, 5)
									   	{
	static std::string	start[] = {
			"Hey everybody! Check out my package!",
			"Let's get this party started!",
			"Glitching weirdness is a term of endearment, right?",
			"Recompiling my combat code!",
			"This time it'll be awesome, I promise!",
			"Look out everybody! Things are about to get awesome!" };

	std::cout << " FragTrap: " << _name << " created" << std::endl;

	std::cout << _name << ": " << start[rand() % (sizeof(start) / sizeof(*start))] << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) {
	std::cout << " FragTrap: " << _name << " copied" << std::endl;
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << " FragTrap: " << _name << " destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	this->_level = rhs._level;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamege = rhs._rangedAttackDamege;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	return *this;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {

	if (_energyPoints < 25){
		outOfEnergie();
		return ;
	}
	void (FragTrap::*funk[5])(std::string const & );
	funk[0] = &FragTrap::rangedAttack;
	funk[1] = &FragTrap::meleeAttack;
	funk[2] = &FragTrap::meleeCritAttack;
	funk[3] = &FragTrap::rangedCritAttack;
	funk[4] = &FragTrap::headAttack;

	(this->*funk[rand() % 5 ])(target);
	this->_energyPoints -= 25;
}

void FragTrap::outOfEnergie() const {
	std::cout << _name << " is out of energie [" << _energyPoints << "/100]"
	<< std::endl;
}

