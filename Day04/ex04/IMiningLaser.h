//
// Created by Oleh IVANYTSKYI on 2019-10-05.
//

#ifndef CPP_DAY00_IMININGLASER_H
#define CPP_DAY00_IMININGLASER_H


#include "IAsteroid.h"

class IMiningLaser
{
public:
	virtual ~IMiningLaser() {}
	virtual void mine(IAsteroid *) = 0;
};


#endif //CPP_DAY00_IMININGLASER_H
