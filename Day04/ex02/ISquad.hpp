//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#ifndef ISQUAD_HPP
#define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISpaceMarine;

class ISquad
{

public:

	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine *getUnit(int) const = 0;
	virtual int push(ISpaceMarine *) = 0;
};

#endif //CPP_DAY00_ISQUAD_HPP


