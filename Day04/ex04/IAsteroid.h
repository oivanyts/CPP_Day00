//
// Created by Oleh IVANYTSKYI on 2019-10-05.
//

#ifndef CPP_DAY00_IASTEROID_H
#define CPP_DAY00_IASTEROID_H


#include <string>

class IMiningLaser;
class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
public:
	virtual ~IAsteroid() {}
	virtual std::string	beMined(DeepCoreMiner *) const = 0; //
	virtual std::string beMined(StripMiner *) const = 0; //
	virtual std::string getName() const = 0;
};


#endif //CPP_DAY00_IASTEROID_H
