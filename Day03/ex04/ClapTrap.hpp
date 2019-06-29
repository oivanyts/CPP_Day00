//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#ifndef CPP_DAY00_CLAPTRAP_HPP
#define CPP_DAY00_CLAPTRAP_HPP


#include <cstdint>
#include <string>

class ClapTrap {

public:

	ClapTrap(std::string	name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap();
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
private:
	std::string	_name;
public:
	const std::string &getName() const;

private:
	uint16_t	_level;
	uint16_t 	_hitPoints;
	uint16_t 	_maxHitPoints;
	uint16_t	_energyPoints;
	uint16_t	_maxEnergyPoints;
	uint16_t	_meleeAttackDamage;
	uint16_t	_rangedAttackDamege;
public:
	uint16_t getMeleeAttackDamage() const;

	uint16_t getRangedAttackDamage() const;

private:
	uint16_t	_armorDamageReduction;
};


#endif //CPP_DAY00_CLAPTRAP_HPP
