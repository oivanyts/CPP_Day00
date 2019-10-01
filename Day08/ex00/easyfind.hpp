//
// Created by Oleh IVANYTSKYI on 2019-07-06.
//

#ifndef CPP_DAY00_EASYFIND_HPP
#define CPP_DAY00_EASYFIND_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <list>
#include <fstream>
#include <exception>

template <typename T>
T	easyfind(T list, int value)
{

	std::list<int>::const_iterator			it = list.begin();
	std::list<int>::const_iterator			ite = list.end();

	ptrdiff_t	i = 0;

	try
	{
		while (it != ite)
		{
			if (*it == value)
				return (i);
			it++;
			i++;
		}
	}
	catch (std::exception& e)
	{
		throw std::exception();
	}
	if (it != list.end())
		return (i);
	throw std::exception();
}



#endif //CPP_DAY00_EASYFIND_HPP
