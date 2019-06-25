//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{

private:

	const Brain _brain;

public:

	const Brain &getBrain() const;
	std::string identify() const;
};


#endif //HUMAN_HPP
