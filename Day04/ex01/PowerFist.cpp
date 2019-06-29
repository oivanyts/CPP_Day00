//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#include <iostream>
#include "PowerFist.hpp"
#include "AWeapon.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(PowerFist const &src) {
	*this = src;
}

PowerFist &PowerFist::operator=(PowerFist const &rhs) {
	if (this != &rhs) // add coping inside if 
	{
		_name = rhs._name;
		_damage = rhs._damage;
		_apCost = rhs._apCost;
	}
	return *this;
}

PowerFist::~PowerFist() {}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist *PowerFist::cloneWeapon() {
	return new PowerFist(*this);
}
