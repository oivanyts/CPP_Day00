//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#ifndef CPP_DAY00_MATERIASOURCE_H
#define CPP_DAY00_MATERIASOURCE_H


#include "IMateriaSource.h"
#include "Ice.h"
#include "Cure.h"

class MateriaSource : public IMateriaSource
{

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const &src);

	MateriaSource	&operator=(MateriaSource const &rhs);
	void			learnMateria(AMateria*);
	AMateria*		createMateria(std::string const & type);

private:

};


#endif //CPP_DAY00_MATERIASOURCE_H
