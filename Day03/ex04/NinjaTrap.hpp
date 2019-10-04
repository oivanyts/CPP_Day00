//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP


#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class NinjaTrap : public virtual ClapTrap {

public:

	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &src);
	virtual ~NinjaTrap();
	NinjaTrap	&operator=(NinjaTrap const &rhs);

	void 		ninjaShoebox(NinjaTrap &attack);
	void 		ninjaShoebox(ClapTrap &attack);
	void 		ninjaShoebox(ScavTrap &attack);
	void 		ninjaShoebox(FragTrap &attack);
	void 		(ClapTrap::*funk[5])(std::string const & );

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);

	NinjaTrap();
private:
	uint16_t	_rangedAttackDamage;

};


#endif //CPP_DAY00_NINJATRAP_HPP
