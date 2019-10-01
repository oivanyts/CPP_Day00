//
// Created by Oleh IVANYTSKYI on 2019-07-05.
//

#include "Array.hpp"

int main()
{
	Array<int>	s(5);
	Array<char>	c(5);
	srand(static_cast<unsigned int>(time(0)));

	for (unsigned int i = 0; i < s.size(); i++) {
		s[i] = rand() % 99;
	}
	std::cout << s << std::endl;

	for (unsigned int i = 0; i < c.size(); i++) {
		c[i] = 'a' + rand() % 26;
	}
	std::cout << c << std::endl;

//	iter(&s, s.size(), printInt);
	return (0);
}
