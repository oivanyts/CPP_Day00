//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP


#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

public:

	TacticalMarine();

	TacticalMarine(TacticalMarine const &src);

	~TacticalMarine();

	TacticalMarine &operator=(TacticalMarine const &rhs);

	ISpaceMarine	*clone() const;
	void 			battleCry()const;
	void 			rangedAttack()const;
	void 			meleeAttack()const;

private:

};


#endif //CPP_DAY00_TACTICALMARINE_HPP
