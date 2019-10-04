//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <cstdint>
#include <string>



class ClapTrap {

public:

	ClapTrap(std::string name,
			uint16_t lvl,
			uint16_t HP,
			uint16_t maxHP,
			uint16_t energy,
			uint16_t maxEnergy,
			uint16_t meleeDamage,
			uint16_t rangeDamege,
			uint16_t armorReduction);
	ClapTrap(std::string	name);
	ClapTrap(ClapTrap const &src);
	virtual ~ClapTrap();
	ClapTrap &operator=(ClapTrap const &rhs);

	void		setName(const std::string &name);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void 		meleeCritAttack(std::string const &target);
	void 		rangedCritAttack(std::string const &target);
	void 		headAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	ClapTrap();
	uint16_t getMeleeAttack() const;
	const std::string &getName() const;
	uint16_t getRangedAttack() const;
protected:
	std::string	_name;
	uint16_t	_level;
	uint16_t 	_hitPoints;
	uint16_t 	_maxHitPoints;
	uint16_t	_energyPoints;
	uint16_t	_maxEnergy;
	uint16_t	_meleeAttack;
	uint16_t	_rangedAttack;
	uint16_t	_armorReduction;
};


#endif //CPP_DAY00_CLAPTRAP_HPP
