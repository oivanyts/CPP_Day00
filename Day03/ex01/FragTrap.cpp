//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name) :	_name(name),
										_level(1),
										_hitPoints(100),
									   	_maxHitPoints(100),
									   	_energyPoints(100),
									   	_maxEnergyPoints(100),
									   	_meleeAttackDamage(30),
									   	_rangedAttackDamege(20),
									   	_armorDamageReduction(5) {
	static std::string	start[] = {
			"Hey everybody! Check out my package!",
			"Let's get this party started!",
			"Glitching weirdness is a term of endearment, right?",
			"Recompiling my combat code!",
			"This time it'll be awesome, I promise!",
			"Look out everybody! Things are about to get awesome!" };


	std::cout << _name << ": " << start[rand() % (sizeof(start) / sizeof(*start))] << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) {
	*this = src;
}

FragTrap::~FragTrap() {}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	this->_level = rhs._level;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints ;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamege = rhs._rangedAttackDamege;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	return *this;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FragTrap "<< _name << "[" << _level <<"] >> *SLAPS "
			  << target << " causing -" << this->_rangedAttackDamege
			  << "hp!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FragTrap "<< _name << "[" << _level <<"] >> *SPITS* "
			  << target << " causing -" << this->_rangedAttackDamege
			  << "hp!" << std::endl;
}

void FragTrap::meleeCritAttack(std::string const &target)
{
	std::cout << "FragTrap " <<_name << "[" << _level  << "] CRIT'S "
			  << target << "'s chest, causing -" << this->_rangedAttackDamege
			  << "hp!" << std::endl;
}

void FragTrap::rangedCritAttack(std::string const &target)
{
	std::cout << "FragTrap " <<_name << "[" << _level  << "] CRIT'S "
			  << target << "'s but, causing -"
			  << this->_meleeAttackDamage << "hp!" << std::endl;
}

void FragTrap::headAttack(std::string const &target) {
	std::cout << "HEADSHOT by " << "FragTrap " << _name << "[" << _level << "] hits "
			  << target << " causing -"
			  << this->_meleeAttackDamage << "hp!" << std::endl;
}
void FragTrap::takeDamage(unsigned int amount) {

	std::string	message[] = {"Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!",
			"I can see through time..." };
	int64_t dmg = amount - this->_armorDamageReduction;
	dmg = dmg >= _maxHitPoints ? _maxHitPoints : dmg;
	if (dmg >= 0)
	{
		int64_t hp = _hitPoints - dmg;
		hp < 0 ? hp = 0 : 0;
		std::cout << "* " << _name << " takes -" << dmg
					<< "["<< hp << "/" << this->_maxHitPoints << "] *" << std::endl;
		std::cout << _name << ": \""
					<< message[rand() % sizeof(message) / sizeof(*message)]
					<< "\"" << std::endl;
		this->_hitPoints = hp;
	}
	else
	{
		std::cout << "* " << _name << " takes -" << dmg
				  << "[" << _hitPoints << "/" << _maxHitPoints << "] * " << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	std::string	message[] = {"Good as new, I think. Am I leaking?",
						  "I'll lead the way! Follow me!",
						  "This way!"};
	int64_t hp = _hitPoints + amount;
	hp > _maxHitPoints ? hp = _maxHitPoints : 0;
	std::cout << "* " << _name << " heals +" << hp - _hitPoints
			  << "["<< hp << "/" << _maxHitPoints << "] *" << std::endl;
	std::cout << _name << ": \""
			  << message[rand() % sizeof(message) / sizeof(*message)]
			  << "\"" << std::endl;
	_hitPoints = hp;
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
	_energyPoints -= 25;
}

void FragTrap::setName(const std::string &name) {
	_name = name;
}

void FragTrap::outOfEnergie() const {
	std::cout << _name << " is out of energie [" << _energyPoints << "/100]"
	<< std::endl;
}

