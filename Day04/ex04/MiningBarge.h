//
// Created by Oleh IVANYTSKYI on 2019-10-05.
//

#ifndef CPP_DAY00_MININGBARGE_H
#define CPP_DAY00_MININGBARGE_H


#include "IMiningLaser.h"

class MiningBarge
{

public:
	MiningBarge();
	~MiningBarge();
	MiningBarge(MiningBarge const &src);
	MiningBarge &operator=(MiningBarge const &rhs);

	void equip(IMiningLaser *src);
	void mine(IAsteroid *tool) const;

private:
	IMiningLaser	*lasers[4];
	int 			count;
};


#endif //CPP_DAY00_MININGBARGE_H
