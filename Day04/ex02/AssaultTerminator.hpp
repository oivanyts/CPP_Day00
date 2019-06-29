//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP


#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

public:

	AssaultTerminator();

	AssaultTerminator(AssaultTerminator const &src);

	~AssaultTerminator();

	AssaultTerminator &operator=(AssaultTerminator const &rhs);

	ISpaceMarine	*clone() const;
	void 			battleCry()const;
	void 			rangedAttack()const;
	void 			meleeAttack()const;


private:

};


#endif //CPP_DAY00_ASSAULTTERMINATOR_HPP
