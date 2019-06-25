//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{

private:
	std::string _type;

public:
	const std::string &getType() const;
	Weapon( const std::string &type );
	void setType( const std::string &type );
};


#endif //WEAPON_HPP
