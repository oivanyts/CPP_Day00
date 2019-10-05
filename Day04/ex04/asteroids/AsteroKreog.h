//
// Created by Oleh IVANYTSKYI on 2019-10-05.
//

#ifndef CPP_DAY00_ASTEROKREOG_H
#define CPP_DAY00_ASTEROKREOG_H


#include "../IAsteroid.h"


class AsteroBocal : public IAsteroid
{

public:
	AsteroBocal();

	~AsteroBocal();

	AsteroBocal(AsteroBocal const &src);

	AsteroBocal &operator=(AsteroBocal const &rhs);

	std::string beMined(DeepCoreMiner *miner) const ;

	std::string beMined(StripMiner *miner) const ;

	virtual std::string getName() const;

private:
	std::string	name_;
};


#endif //CPP_DAY00_ASTEROKREOG_H
