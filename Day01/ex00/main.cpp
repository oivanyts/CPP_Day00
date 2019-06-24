//
// Created by Oleh IVANYTSKYI on 2019-06-24.
//

#include "pony.hpp"
#include <iostream>
#include <string>

int main()
{
	Pony	heapp = Pony::ponyOnTheStack("STACK");
	Pony	*stackk = Pony::ponyOnTheHeap("HEAP");

	std::cout << "something" << std::endl;

	delete stackk;
	system("leaks -q ex00_01");
	return (0);
}