//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#include <iostream>
#include "ScavTrap.hpp"
#include "../ex02/ClapTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name) : 	ClapTrap(name, 1, 100, 100, 50, 12, 20, 15, 3)
{
	std::cout << " ScavTrap: " << _name << " created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << " ScavTrap: " << _name << " copied" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << " ScavTrapp: " << _name << " destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
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

