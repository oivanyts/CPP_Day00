//
// Created by Oleh IVANYTSKYI on 2019-10-05.
//

#ifndef CPP_DAY00_DEEPCOREMINER_H
#define CPP_DAY00_DEEPCOREMINER_H


#include "../IMiningLaser.h"

class DeepCoreMiner : public IMiningLaser
{

public:
	DeepCoreMiner();

	~DeepCoreMiner();

	DeepCoreMiner(DeepCoreMiner const &src);

	DeepCoreMiner &operator=(DeepCoreMiner const &rhs);

	virtual void mine(IAsteroid *asteroid);

private:
	std::string	name_;
};


#endif //CPP_DAY00_DEEPCOREMINER_H
