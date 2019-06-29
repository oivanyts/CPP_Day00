//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#ifndef CPP_DAY00_PEON_HPP
#define CPP_DAY00_PEON_HPP


#include <string>
#include "Victim.hpp"

class Peon : public Victim {

public:

	Peon(std::string const &name);
	Peon(Peon const &src);
	~Peon();
	Peon &operator=(Peon const &rhs);

	void getPolymorphed() const;

private:

	Peon();

};


#endif //CPP_DAY00_PEON_HPP
