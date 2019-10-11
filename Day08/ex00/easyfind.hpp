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
int	easyfind(T obj, int value)
{
	typename T::iterator iterator;
	iterator = std::find(obj.begin(), obj.end(), value);
	if (iterator == obj.end())
		throw std::exception();
	return (*iterator);
}



#endif //CPP_DAY00_EASYFIND_HPP
