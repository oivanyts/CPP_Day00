//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#ifndef CPP_DAY00_FRAGTRAP_HPP
#define CPP_DAY00_FRAGTRAP_HPP

#include <cstdint>
#include <string>
#include <zconf.h>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap();

	FragTrap 	&operator=(FragTrap const &rhs);

	void		vaulthunter_dot_exe(std::string const & target);
	void		outOfEnergie() const ;

private:
	FragTrap();
	std::string	_name;
	uint16_t	_level;
	uint16_t 	_hitPoints;
	uint16_t 	_maxHitPoints;
	uint16_t	_energyPoints;
	uint16_t	_maxEnergyPoints;
	uint16_t	_meleeAttackDamage;
	uint16_t	_rangedAttackDamege;
	uint16_t	_armorDamageReduction;

};


#endif //CPP_DAY00_FRAGTRAP_HPP
