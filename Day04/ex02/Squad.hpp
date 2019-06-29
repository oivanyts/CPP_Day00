//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

typedef struct 		sUnit{
	ISpaceMarine	*unit;
	struct sUnit	*next;
}					tUnit;

class Squad : public ISquad {

public:

	Squad();
	Squad(Squad const &src);
	virtual ~Squad();
	Squad &operator=(Squad const &rhs);

	int					getCount() const;
	ISpaceMarine		*getUnit(int i) const;
	int					push(ISpaceMarine *newUnit);

private:
	int				_unitCount;
	tUnit			*_firstShip;

};


#endif //CPP_DAY00_SQUAD_HPP
