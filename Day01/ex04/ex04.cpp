//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#include <iostream>

int main()
{
	std::string       str  = "HI THIS IS BRAIN";
	std::string       *ptr = &str;
	std::string const &ref = str;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}