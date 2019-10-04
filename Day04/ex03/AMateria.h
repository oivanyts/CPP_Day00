//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#ifndef CPP_DAY00_AMATERIA_H
#define CPP_DAY00_AMATERIA_H


#include <string>
#include "ICharacter.h"
#include "Ice.h"
#include "Cure.h"


class AMateria
{

public:
	~AMateria();

	AMateria();

	AMateria(AMateria const &src);
	AMateria(std::string const & type);

	std::string const & getType() const; //Returns the materia type_
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter & target);
	AMateria &operator=(AMateria const &rhs);

private:
	unsigned int xp_;
	std::string &type_;

};


#endif //CPP_DAY00_AMATERIA_H
