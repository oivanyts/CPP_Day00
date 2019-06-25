//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;

	Weapon      &_gun;

public:
	HumanA( const std::string &name, Weapon &maxim );

public:
	void setWeapon( Weapon weapon );
	void attack() const;
};

#endif //HUMANA_HPP
