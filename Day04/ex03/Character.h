//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#ifndef CPP_DAY00_CHARACTER_H
#define CPP_DAY00_CHARACTER_H

#include "Ice.h"
#include "Cure.h"
#include "AMateria.h"
#include "ICharacter.h"

class Character : public ICharacter
{

public:
	Character();
	Character(std::string const &name);
	Character(Character const &src);
	Character &operator=(Character const &rhs);

	~Character();

	std::string const &getName() const;

	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

private:
	std::string	const name_;
	AMateria	*pocket_[4];
	int			count;

};


#endif //CPP_DAY00_CHARACTER_H
