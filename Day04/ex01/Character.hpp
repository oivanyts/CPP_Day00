//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#ifndef CPP_DAY00_CHARACTER_HPP
#define CPP_DAY00_CHARACTER_HPP


#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

public:

	Character(std::string const &name);
	~Character();
	Character(Character const &src);

	Character &operator=(Character const &rhs);

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);
	std::string  getName() const;
	int getAp() const;

	AWeapon *getWeapon() const;

private:

	Character();

	std::string	_name;
	int 		_ap;
	AWeapon		*_weapon;
};
std::ostream &operator<<(std::ostream &os,Character const &rhs);

#endif //CPP_DAY00_CHARACTER_HPP
