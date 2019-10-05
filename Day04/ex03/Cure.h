//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#ifndef CPP_DAY00_CURE_H
#define CPP_DAY00_CURE_H


#include "AMateria.h"

class Cure : public AMateria
{

public:
	Cure();

	~Cure();

	Cure(Cure const &src);

	Cure &operator=(Cure const &rhs);

	virtual const std::string &getType() const;

	virtual unsigned int getXP() const;

	virtual AMateria *clone() const;

	virtual void use(ICharacter &target);

private:

};


#endif //CPP_DAY00_CURE_H
