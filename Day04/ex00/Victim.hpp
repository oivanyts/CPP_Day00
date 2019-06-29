//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#ifndef CPP_DAY00_VICTIM_HPP
#define CPP_DAY00_VICTIM_HPP


#include <string>

class Victim {

public:


	Victim(std::string const &name);
	Victim(Victim const &src);
	~Victim();

	const std::string &getName() const;
	virtual void getPolymorphed() const;
	Victim &operator=(Victim const &rhs);

protected:
	Victim();
	std::string	_name;
};

std::ostream &operator<<(std::ostream &os,Victim const &rhs);


#endif //CPP_DAY00_VICTIM_HPP
