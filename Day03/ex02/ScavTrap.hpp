//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#ifndef CPP_DAY00_SCAVTRAP_HPP
#define CPP_DAY00_SCAVTRAP_HPP


#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap(std::string const name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &rhs);
	void 		challengeNewcomer();


private:
	ScavTrap();
};


#endif //CPP_DAY00_SCAVTRAP_HPP
