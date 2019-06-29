//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {}

NinjaTrap::NinjaTrap(NinjaTrap const &src) {
	*this = src;
}

NinjaTrap::~NinjaTrap() {}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs) {
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
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	return *this;
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name),
												_hitPoints(60),
												_maxHitPoints(60),
												_energyPoints(120),
												_maxEnergyPoints(120),
												_meleeAttackDamage(60),
												_rangedAttackDamage(5),
												_armorDamageReduction(0)
{
	std::cout << " ClapTrap: " << _name << " created" << std::endl;
	funk[0] = &ClapTrap::rangedAttack;
	funk[1] = &ClapTrap::rangedCritAttack;
	funk[2] = &ClapTrap::meleeAttack;
	funk[3] = &ClapTrap::meleeCritAttack;
	funk[4] = &ClapTrap::headAttack;
}



void NinjaTrap::ninjaShoebox(NinjaTrap &attack)
{
	int num = rand() % 5;
	(this->*funk[num])(attack.getName());
	if (num < 2)
		attack.takeDamage(attack.getRangedAttackDamage());
	else
		attack.takeDamage(attack.getMeleeAttackDamage());
}

void NinjaTrap::ninjaShoebox(ClapTrap &attack)
{
	int num = rand() % 5;
	(this->*funk[num])(attack.getName());
	if (num < 2)
		attack.takeDamage(attack.getRangedAttackDamage());
	else
		attack.takeDamage(attack.getMeleeAttackDamage());
}

void NinjaTrap::ninjaShoebox(ScavTrap &attack)
{

	int num = rand() % 5;
	(this->*funk[num])(attack.getName());
	if (num < 2)
		attack.takeDamage(attack.getRangedAttackDamage());
	else
		attack.takeDamage(attack.getMeleeAttackDamage());
}

void NinjaTrap::ninjaShoebox(FragTrap &attack)
{

	int num = rand() % 5;
	(this->*funk[num])(attack.getName());
	if (num < 2)
		attack.takeDamage(attack.getRangedAttackDamage());
	else
		attack.takeDamage(attack.getMeleeAttackDamage());

}
