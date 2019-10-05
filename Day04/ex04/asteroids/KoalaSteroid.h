
// Created by Oleh IVANYTSKYI on 2019-10-05.
//

#ifndef CPP_DAY00_KOALASTEROID_H
#define CPP_DAY00_KOALASTEROID_H


#include "../IAsteroid.h"

class BocalSteroid  : public IAsteroid
{

public:
	BocalSteroid();

	~BocalSteroid();

	BocalSteroid(BocalSteroid const &src);

	BocalSteroid &operator=(BocalSteroid const &rhs);


	virtual std::string getName() const;

	virtual std::string beMined(DeepCoreMiner *miner) const;

	virtual std::string beMined(StripMiner *miner) const;

private:
	std::string	name_;
};


#endif //CPP_DAY00_KOALASTEROID_H
