//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent	allianse("Alliance");
	ZombieEvent	empire("Dark");
	ZombieEvent	horde("Horde");

	Zombie	*warrior1 = horde.newZombie("King");
	Zombie	*warrior2 = horde.newZombie("Elf");

	warrior1->announce();
	warrior2->announce();

	srand(time(NULL));
	empire.randomChump();
	empire.setZombieType("Light");
	empire.randomChump();
	allianse.randomChump();
	allianse.randomChump();

	delete warrior1;
	delete warrior2;
	return 0;
}