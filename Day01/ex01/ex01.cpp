//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//
#include <iostream>

void memoryLeak()
{
	std::string*        panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete(panthere);
}