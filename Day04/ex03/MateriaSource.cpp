//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#include "MateriaSource.h"

MateriaSource::MateriaSource()
{

}

MateriaSource::~MateriaSource()
{

}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (&rhs != this)
	{ }
	return *this;
}

void MateriaSource::learnMateria(AMateria *)
{

}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	return ;
}
