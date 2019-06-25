//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#include "Weapon.hpp"

void Weapon::setType( const std::string &type )
{
	_type = type;
}

const std::string &Weapon::getType() const
{
	return _type;
}

Weapon::Weapon( const std::string &type ) : _type(type)
{

}
