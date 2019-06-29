//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#include <iostream>
#include "Character.hpp"

Character::Character() {}

Character::Character(Character const &src) {
	*this = src;
}

Character &Character::operator=(Character const &rhs) {
	if (this != &rhs) // add coping inside if
	{
		this->_name = rhs._name;
		this->_ap = rhs._ap;
		this->_weapon = rhs._weapon->cloneWeapon();
	}
	return *this;
}

Character::~Character() {}

Character::Character(std::string const &name) : _name(name) , _ap(40), _weapon(nullptr) {

}

void Character::recoverAP() {
	if (this->_ap >= 40) return;
	if (this->_ap >= 30 &&  this->_ap < 40)
		this->_ap = 40;
	else this->_ap += 10;
	return;
}

void Character::equip(AWeapon *weapon) {
	_weapon = weapon;
}

void Character::attack(Enemy *enemy) {
	if (!this->_weapon || this->_ap < this->_weapon->getAPCost())
		return;
	std::cout << _name << " attacks " << enemy->getType()
				<< " with a " << this->_weapon->getName() << std::endl;
	this->_ap -= this->_weapon->getAPCost();
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHp() <= 0)
		delete(enemy);
}

std::string Character::getName() const {
	return _name;
}

int Character::getAp() const {
	return _ap;
}

AWeapon *Character::getWeapon() const {
	if (this->_weapon)
		return this->_weapon;
	return nullptr;
}

std::ostream &operator<<(std::ostream &os, Character const &rhs) {
	os << rhs.getName() << " has " << rhs.getAp() << " AP and ";
	if (rhs.getWeapon())
		os << " wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		os << " is unarmed" << std::endl;
	return os;
}
