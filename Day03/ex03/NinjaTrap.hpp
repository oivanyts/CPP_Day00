//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#ifndef CPP_DAY00_NINJATRAP_HPP
#define CPP_DAY00_NINJATRAP_HPP


#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {

public:


	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &src);
	~NinjaTrap();

	NinjaTrap	&operator=(NinjaTrap const &rhs);
	void 		ninjaShoebox(NinjaTrap &attack);
	void 		ninjaShoebox(ClapTrap &attack);
	void 		ninjaShoebox(ScavTrap &attack);
	void 		ninjaShoebox(FragTrap &attack);


	void (ClapTrap::*funk[5])(std::string const & );
private:
	NinjaTrap();
	uint16_t	_rangedAttackDamage;

};


#endif //CPP_DAY00_NINJATRAP_HPP
