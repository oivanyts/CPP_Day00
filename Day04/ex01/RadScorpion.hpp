//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#ifndef CPP_DAY00_RADSCORPION_HPP
#define CPP_DAY00_RADSCORPION_HPP


#include "Enemy.hpp"

class RadScorpion : public Enemy{

public:

	RadScorpion();
	RadScorpion(RadScorpion const &src);
	~RadScorpion();

	RadScorpion &operator=(RadScorpion const &rhs);

private:

};


#endif //CPP_DAY00_RADSCORPION_HPP
