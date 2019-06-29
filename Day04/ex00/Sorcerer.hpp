//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#ifndef CPP_DAY00_SORCERER_HPP
#define CPP_DAY00_SORCERER_HPP


#include <string>
#include "Victim.hpp"

class Sorcerer {

public:

	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &src);
	~Sorcerer();
	Sorcerer	&operator=(Sorcerer const &rhs);
	const		std::string &getName() const;
	const		std::string &getTitle() const;
	void		polymorph(Victim const &target) const;

private:

	Sorcerer();
	std::string	_name;
	std::string	_title;

};

std::ostream &operator<<(std::ostream &os,Sorcerer const &rhs);


#endif //CPP_DAY00_SORCERER_HPP
