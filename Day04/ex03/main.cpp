//
// Created by Oleh IVANYTSKYI on 2019-10-04.
//

#include "IMateriaSource.h"
#include "Ice.h"
#include "MateriaSource.h"
#include "Cure.h"
#include "Character.h"
#include "ICharacter.h"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* zaz = new Character("zaz");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);
	ICharacter* bob = new Character("bob");
	zaz->use(0, *bob);
	zaz->use(1, *bob);
	delete bob;
	delete zaz;
	delete src;
	return 0;
}