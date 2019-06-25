//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//


#include <iostream>
#include "Human.hpp"

int main()
{
	Human bob;
	std::cout << std::uppercase;
	std::cout << std::uppercase << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;

	std::cout << bob.getBrain().getMass() << std::endl;
	return 0;
}
