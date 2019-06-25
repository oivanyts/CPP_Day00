//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>
#include <string>

class Brain
{
private:
	uint _mass;
	std::stringstream address;
public:

	Brain();
	~Brain();
	std::string identify() const;
	uint getMass() const;
};


#endif //BRAIN_HPP
