//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(ScavTrap const &src) {
	*this = src;
}

ScavTrap::~ScavTrap() {}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
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

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "ScavTrap "<< _name << "[" << _level <<"] >> *SLAPS "
			  << target << " causing -" << this->_rangedAttackDamege
			  << "hp!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "ScavTrap "<< _name << "[" << _level <<"] >> *SPITS* "
			  << target << " causing -" << this->_rangedAttackDamege
			  << "hp!" << std::endl;
}

void ScavTrap::meleeCritAttack(std::string const &target)
{
	std::cout << "ScavTrap " <<_name << "[" << _level  << "] CRIT'S "
			  << target << "'s chest, causing -" << this->_rangedAttackDamege
			  << "hp!" << std::endl;
}

void ScavTrap::rangedCritAttack(std::string const &target)
{
	std::cout << "ScavTrap " <<_name << "[" << _level  << "] CRIT'S "
			  << target << "'s but, causing -"
			  << this->_meleeAttackDamage << "hp!" << std::endl;
}

void ScavTrap::headAttack(std::string const &target) {
	std::cout << "HEADSHOT by " << "ScavTrap " << _name << "[" << _level << "] hits "
			  << target << " causing -"
			  << this->_meleeAttackDamage << "hp!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {

	std::string	message[] = {"My servos... are seizing...",
								"I can see... the code"};
	int64_t dmg = amount - this->_armorDamageReduction;
	dmg = dmg >= _maxHitPoints ? _maxHitPoints : dmg;
	if (dmg >= 0)
	{
		int64_t hp = _hitPoints - dmg;
		hp < 0 ? hp = 0 : 0;
		std::cout << "* " << _name << " takes -" << dmg
				  << "["<< hp << "/" << this->_maxHitPoints
				  << "] *" << std::endl;
		std::cout << _name << ": \""
				  << message[rand() % sizeof(message) / sizeof(*message)]
				  << "\"" << std::endl;
		this->_hitPoints = hp;
	}
	else
	{
		std::cout << "* " << _name << " takes -" << dmg
				  << "[" << _hitPoints << "/"
				  << _maxHitPoints << "] * " << std::endl;
	}
}

void ScavTrap::challengeNewcomer()
{
	std::string	challenges[] = {
			"Don't forget to check out Marcus's store!",
			"Greetings Traveller! There are new missions available at the Fyrestone Bounty-board!",
			"There are new bounties available in Fyrestone!",
			"Wow! You're not dead?",
			"Hey, check me out everybody! I'm dancin', I'm dancin'!",
			"Unce! Unce! Unce! Unce! Ooo, oh check me out. Unce! Unce! Unce! Unce! Oh, come on get down.",
			"Yoo hoooooooooo!",
			"I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!",
			"Hey! Over here! I'm over heere!",
			"Still haven't found the Vault?",
			"I'm over here!",
			"Rrrrrgh...this isn't working!",
			"Unce! Unce! I think I lost the beat... but, Unce! Unce!",
			"Wanna hear a new dubstep song I wrote? Wub! Wub",
			"Scooter asked me to tell you about a, uh, \"little sumthin' sumthin' \" he needs done. You should ask him about it!",
			"Did you find the Vault yet?",
			"Sure is lonely around here."
	};
	std::cout << _name
			<< challenges[rand() % sizeof(challenges) / sizeof(*challenges)]
			<< std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::string	message[] = {"The box is awaiting your attention.",
								"Please open the box.",
								"Yeah? Well, hmph!",
								"The traveler will protect me."};
	int64_t hp = _hitPoints + amount;
	hp > _maxHitPoints ? hp = _maxHitPoints : 0;
	std::cout << "* " << _name << " heals +" << hp - _hitPoints
			  << "["<< hp << "/" << _maxHitPoints << "] *" << std::endl;
	std::cout << _name << ": \""
			  << message[rand() % sizeof(message) / sizeof(*message)]
			  << "\"" << std::endl;
	_hitPoints = hp;
}

ScavTrap::ScavTrap(std::string name) : _name(name),
									   _level(1),
									   _hitPoints(100),
									   _maxHitPoints(100),
									   _energyPoints(50),
									   _maxEnergyPoints(12),
									   _meleeAttackDamage(20),
									   _rangedAttackDamege(15),
									   _armorDamageReduction(3) {

}

void ScavTrap::setName(const std::string &name) {
	_name = name;
}

