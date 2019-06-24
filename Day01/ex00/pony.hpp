//
// Created by Oleh IVANYTSKYI on 2019-06-24.
//

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
public:

	static Pony		ponyOnTheStack(std::string name);
	static Pony		*ponyOnTheHeap(std::string name);
	~Pony();

private:
	std::string	_name;
	Pony(std::string name);
	char	*mem;
};


#endif //PONY_HPP
