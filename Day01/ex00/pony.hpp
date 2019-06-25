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

	~Pony();
	Pony(std::string name);

	const std::string	&getName() const;
	void				showPony();
	void				ponyDied();

private:
	std::string			_name;
};


#endif //PONY_HPP
