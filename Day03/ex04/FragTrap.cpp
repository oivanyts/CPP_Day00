//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << " FragTrap(def): " << _name << " created" << std::endl;
}

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
	std::cout << "Destructor Called: [FragTrap] " << _name <<std::endl;
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
	this->_maxEnergy = rhs._maxEnergy;
	this->_meleeAttack = rhs._meleeAttack;
	this->_rangedAttack = rhs._rangedAttack;
	this->_armorReduction = rhs._armorReduction;
	return *this;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {

	if (_energyPoints < 25){
		outOfEnergie();
		return ;
	}
	void (ClapTrap::*funk[5])(std::string const & );
	funk[0] = &ClapTrap::rangedAttack;
	funk[1] = &ClapTrap::meleeAttack;
	funk[2] = &ClapTrap::meleeCritAttack;
	funk[3] = &FragTrap::rangedCritAttack;
	funk[4] = &FragTrap::headAttack;

	(this->*funk[rand() % 5 ])(target);
	this->_energyPoints -= 25;
}

void FragTrap::outOfEnergie() const {
	std::cout << _name << " is out of energie [" << _energyPoints << "/100]"
	<< std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FragTrap "<< _name << "[" << _level <<"] >> *SLAPS "
			  << target << " causing -" << this->_rangedAttack
			  << "hp!" << std::endl;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FragTrap "<< _name << "[" << _level <<"] >> *SLAPS "
			  << target << " causing -" << this->_rangedAttack
			  << "hp!" << std::endl;
}

