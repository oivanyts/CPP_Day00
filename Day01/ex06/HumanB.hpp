//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;

	Weapon      *_gun;

public:
	HumanB( const std::string &name );

public:
	void setWeapon( Weapon &weapon );
	void attack() const;
};


#endif //HUMANB_HPP
