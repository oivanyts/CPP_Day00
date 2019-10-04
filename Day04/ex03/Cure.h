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

private:

};


#endif //CPP_DAY00_CURE_H
