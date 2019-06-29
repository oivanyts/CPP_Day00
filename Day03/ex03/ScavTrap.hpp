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


#endif //CPP_DAY00_SCAVTRAP_HPP
