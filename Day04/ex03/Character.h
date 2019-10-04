//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#ifndef CPP_DAY00_CHARACTER_H
#define CPP_DAY00_CHARACTER_H


#include "ICharacter.h"

class Character : public ICharacter
{

public:
	Character();
	~Character();
	Character(Character const &src);
	Character &operator=(Character const &rhs);

private:
	AMateria pocket[4];
};


#endif //CPP_DAY00_CHARACTER_H
