//
// Created by Oleh IVANYTSKYI on 2019-10-05.
//

#ifndef CPP_DAY00_STRIPMINER_H
#define CPP_DAY00_STRIPMINER_H

#include "../IMiningLaser.h"

class StripMiner : public IMiningLaser
{

public:
	StripMiner();

	~StripMiner();

	StripMiner(StripMiner const &src);

	StripMiner &operator=(StripMiner const &rhs);

	 virtual void mine(IAsteroid *asteroid);

private:
	std::string	name_;
};


#endif //CPP_DAY00_STRIPMINER_H
