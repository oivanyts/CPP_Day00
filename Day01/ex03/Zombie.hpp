//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{

public:

	void announce() const;
	const std::string &getName() const;
	const std::string &getType() const;
	Zombie(std::string name, std::string type);
	~Zombie();

private:

	std::string _name;
	std::string _type;
	static std::string _randomNames[10];

public:
	static std::string &getRandomNames(u_int8_t n);
};


#endif //ZOMBIE_HPP
