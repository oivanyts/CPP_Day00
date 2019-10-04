//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#ifndef CPP_DAY00_IMATERIASOURCE_H
#define CPP_DAY00_IMATERIASOURCE_H

#include "AMateria.h"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //CPP_DAY00_IMATERIASOURCE_H
