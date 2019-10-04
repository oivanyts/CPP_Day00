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
	this->_maxEnergy = rhs._maxEnergy;
	this->_meleeAttack = rhs._meleeAttack;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorReduction = rhs._armorReduction;
	return *this;
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name, 1,60, 60, 120, 120, 60, 5, 0)
{
	std::cout << " NinjaTrap: " << _name << " created" << std::endl;
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
		attack.takeDamage(attack.getRangedAttack());
	else
		attack.takeDamage(attack.getMeleeAttack());
}

void NinjaTrap::ninjaShoebox(ClapTrap &attack)
{
	int num = rand() % 5;
	(this->*funk[num])(attack.getName());
	if (num < 2)
		attack.takeDamage(attack.getRangedAttack());
	else
		attack.takeDamage(attack.getMeleeAttack());
}

void NinjaTrap::ninjaShoebox(ScavTrap &attack)
{

	int num = rand() % 5;
	(this->*funk[num])(attack.getName());
	if (num < 2)
		attack.takeDamage(attack.getRangedAttack());
	else
		attack.takeDamage(attack.getMeleeAttack());
}

void NinjaTrap::ninjaShoebox(FragTrap &attack)
{

	int num = rand() % 5;
	(this->*funk[num])(attack.getName());
	if (num < 2)
		attack.takeDamage(attack.getRangedAttack());
	else
		attack.takeDamage(attack.getMeleeAttack());

}

uint16_t NinjaTrap::getRangedAttack() const
{
	return _rangedAttack;
}
