
#include "Character.h"

Character::Character()
{
	for (int i = 0; i < 4; i++)
	{
		pocket_[i] = nullptr;
	}
}

Character::Character(std::string const &name) : name_(name)
{
	for (int i = 0; i < 4; i++)
	{
		pocket_[i] = nullptr;
	}
}

Character::~Character()
{

}

Character::Character(Character const &src)
{
	*this = src;
}

Character &Character::operator=(Character const &rhs)
{
	if (&rhs != this)
	{

	}
	return *this;
}

std::string const &Character::getName() const
{
	return name_;
}

void Character::equip(AMateria *m)
{
	if (count < 4)
	{
		pocket_[count] = m;
		count++;
	}
}

void Character::unequip(int idx)
{
	if (pocket_[idx])
		pocket_[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (pocket_[idx])
		pocket_[idx]->use(target);
}
