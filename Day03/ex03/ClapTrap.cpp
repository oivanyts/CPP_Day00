//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name, uint16_t lvl, uint16_t HP, uint16_t maxHP, uint16_t energy, uint16_t maxEnergy,
				   uint16_t meleeDamage, uint16_t rangeDamege, uint16_t armorReduction) :_name(name),
										_level(lvl),
										_hitPoints(HP),
										_maxHitPoints(maxHP),
										_energyPoints(energy),
										_maxEnergy(maxEnergy),
										_meleeAttack(meleeDamage),
										_rangedAttack(rangeDamege),
										_armorReduction(armorReduction) {
}


ClapTrap::ClapTrap(std::string name) : _name(name),
									   _level(1),
									   _hitPoints(100),
									   _maxHitPoints(100),
									   _energyPoints(50),
									   _maxEnergy(12),
									   _meleeAttack(20),
									   _rangedAttack(15),
									   _armorReduction(3) {
	std::cout << " ClapTrap: " << _name << " created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << " ClapTrap: " << _name << " copied" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << " ClapTrap: " << _name << " destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
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
	this->_rangedAttack = rhs._rangedAttack;
	this->_armorReduction = rhs._armorReduction;
	return *this;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "ClapTrap "<< _name << "[" << _level <<"] >> *SLAPS "
			  << target << " causing -" << this->_rangedAttack
			  << "hp!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "ClapTrap "<< _name << "[" << _level <<"] >> *SPITS* "
			  << target << " causing -" << this->_rangedAttack
			  << "hp!" << std::endl;
}

void ClapTrap::meleeCritAttack(std::string const &target)
{
	std::cout << "ClapTrap " <<_name << "[" << _level  << "] CRIT'S "
			  << target << "'s chest, causing -" << this->_rangedAttack
			  << "hp!" << std::endl;
}

void ClapTrap::rangedCritAttack(std::string const &target)
{
	std::cout << "ClapTrap " <<_name << "[" << _level  << "] CRIT'S "
			  << target << "'s but, causing -"
			  << this->_meleeAttack << "hp!" << std::endl;
}

void ClapTrap::headAttack(std::string const &target) {
	std::cout << "HEADSHOT by " << "ClapTrap " << _name << "[" << _level << "] hits "
			  << target << " causing -"
			  << this->_meleeAttack << "hp!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount) {

	std::string	message[] = {"My servos... are seizing...",
								"I can see... the code"};
	int64_t dmg = amount - this->_armorReduction;
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


void ClapTrap::beRepaired(unsigned int amount) {
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

void ClapTrap::setName(const std::string &name) {
	_name = name;
}

const std::string &ClapTrap::getName() const
{
	return _name;
}

uint16_t ClapTrap::getMeleeAttack() const
{
	return _meleeAttack;
}

uint16_t ClapTrap::getRangedAttack() const
{
	return _rangedAttack;
}
