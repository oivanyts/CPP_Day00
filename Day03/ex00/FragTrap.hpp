//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#ifndef CPP_DAY00_FRAGTRAP_HPP
#define CPP_DAY00_FRAGTRAP_HPP

#include <cstdint>
#include <string>
#include <zconf.h>

class FragTrap {

public:

	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap();

	FragTrap 	&operator=(FragTrap const &rhs);

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void 		meleeCritAttack(std::string const &target);
	void 		rangedCritAttack(std::string const &target);
	void 		headAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const & target);
	void		outOfEnergie() const ;
	void		setName(const std::string &name);

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
