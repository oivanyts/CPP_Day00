//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#include <iostream>
#include "RadScorpion.hpp"
#include "Enemy.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src) {
	*this = src;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &rhs) {
	if (this != &rhs) // add coping inside if
	{
		return *this;
	}
	return *this;
}
