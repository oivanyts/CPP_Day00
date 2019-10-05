//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#ifndef CPP_DAY00_ICE_H
#define CPP_DAY00_ICE_H


#include "AMateria.h"

class Ice : public AMateria
{

public:
	Ice();
	~Ice();
	Ice(Ice const &src);
	Ice &operator=(Ice const &rhs);

	virtual const std::string &getType() const;

	virtual unsigned int getXP() const;

	virtual AMateria *clone() const;

	virtual void use(ICharacter &target);


private:

};


#endif //CPP_DAY00_ICE_H
