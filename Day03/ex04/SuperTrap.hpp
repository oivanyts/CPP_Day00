//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#ifndef CPP_DAY00_SUPERTRAP_HPP
#define CPP_DAY00_SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : virtual public NinjaTrap, virtual  public FragTrap {

public:

	SuperTrap();
	SuperTrap(std::string const &name);
	SuperTrap(SuperTrap const &src);
	virtual ~SuperTrap();
	SuperTrap &operator=(SuperTrap const &rhs);

	using NinjaTrap::meleeAttack;
	using FragTrap::rangedAttack;

private:

};


#endif //CPP_DAY00_SUPERTRAP_HPP
