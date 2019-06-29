//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#include <iostream>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) {
	*this = src;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs) {
	if (this != &rhs) // add coping inside if 
	{
		_name = rhs._name;
		_damage = rhs._damage;
		_apCost = rhs._apCost;
	}
	return *this;
}

PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle *PlasmaRifle::cloneWeapon() {
	return new PlasmaRifle(*this);
}
