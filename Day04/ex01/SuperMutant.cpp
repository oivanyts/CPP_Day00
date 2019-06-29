//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant"){
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &src) {
	*this = src;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &rhs) {
	if (this != &rhs) // add coping inside if
	{
		return *this;
	}
	return *this;
}

void SuperMutant::takeDamage(int dmg) {
	if (dmg < 0)
		return;
	if (dmg - 3 > _hp)
		_hp = 0;
	else
		_hp -= dmg - 3;
}