//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(AWeapon const &src) {
	*this = src;
}

AWeapon &AWeapon::operator=(AWeapon const &rhs) {
	if (this != &rhs)
	{
		_name = rhs._name;
		_damage = rhs._damage;
		_apCost = rhs._apCost;
	}
	return *this;
}

AWeapon::~AWeapon() {}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name),
										_apCost(apcost), _damage(damage) {

}

int AWeapon::getAPCost() const {
	return _apCost;
}

int AWeapon::getDamage() const {
	return _damage;
}

std::string AWeapon::getName() const {
	return _name;
}

