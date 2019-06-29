//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#ifndef CPP_DAY00_AWEAPON_HPP
#define CPP_DAY00_AWEAPON_HPP


#include <string>

class AWeapon {

public:

	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &src);
	virtual		~AWeapon();

	AWeapon &operator=(AWeapon const &rhs);
	std::string getName() const;
	int			getAPCost() const;
	int			getDamage() const;

	virtual AWeapon 	*cloneWeapon() = 0;

	virtual void attack() const = 0;

protected:
	std::string	_name;
	int _apCost;
	int _damage;

};
std::ostream &operator<<(std::ostream &os,AWeapon const &rhs);

#endif //CPP_DAY00_AWEAPON_HPP
