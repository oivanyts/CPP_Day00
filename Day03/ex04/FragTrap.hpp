//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#ifndef CPP_DAY00_FRAGTRAP_HPP
#define CPP_DAY00_FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

public:

	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	virtual ~FragTrap();

	FragTrap 	&operator=(FragTrap const &rhs);

	void		vaulthunter_dot_exe(std::string const & target);
	void		outOfEnergie() const ;
	void		meleeAttack(std::string const &target);
	void		rangedAttack(std::string const &target);


	FragTrap();
private:

};


#endif //CPP_DAY00_FRAGTRAP_HPP
