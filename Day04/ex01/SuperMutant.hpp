//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#ifndef CPP_DAY00_SUPERMUTANT_HPP
#define CPP_DAY00_SUPERMUTANT_HPP


#include "Enemy.hpp"

class SuperMutant : public Enemy{

public:

	SuperMutant();
	SuperMutant(SuperMutant const &src);
	~SuperMutant();
	SuperMutant &operator=(SuperMutant const &rhs);


	void takeDamage(int dmg);

private:

};


#endif //CPP_DAY00_SUPERMUTANT_HPP
