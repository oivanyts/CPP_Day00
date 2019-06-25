//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#include "Human.hpp"

std::string Human::identify() const
{
	return this->_brain.identify();
}

const Brain &Human::getBrain() const
{
	return _brain;
}
