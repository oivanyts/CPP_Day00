//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#include "MateriaSource.h"

MateriaSource::MateriaSource() : count(0)
{
	for (int i = 0; i < 4 ; i++)
	{
		mem_[i] = nullptr;
	}
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
	{
		for (int i = 0; i < 4 ; i++)
		{
			mem_[i] = rhs.mem_[i]->clone();
		}
		count = rhs.count;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *src)
{
	if (count < 4)
	{
		mem_[count] = src->clone();
		count++;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (mem_[i] && mem_[i]->getType() == type)
			return mem_[i]->clone();
	}
	return nullptr;
}
