//
// Created by Oleh IVANYTSKYI on 2019-10-05.
//

#include "MiningBarge.h"
#include "asteroids/AsteroKreog.h"
#include "lasers/DeepCoreMiner.h"
#include "lasers/StripMiner.h"
#include "asteroids/KoalaSteroid.h"

int main(void)
{
	MiningBarge barge;
	//try to mine empty
	barge.mine(new AsteroBocal());

	barge.equip(new DeepCoreMiner());
	barge.equip(new StripMiner());
	barge.equip(new StripMiner());
	barge.equip(new DeepCoreMiner());
	// try to add 5th laser
	barge.equip(new DeepCoreMiner());

	barge.mine(new AsteroBocal());
	barge.mine(new BocalSteroid());


	return (0);
}
