//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#ifndef CPP_DAY00_ICHARACTER_H
#define CPP_DAY00_ICHARACTER_H

#include <string>
#include "AMateria.h"

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria * m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif //CPP_DAY00_ICHARACTER_H
