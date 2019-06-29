//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#include <iostream>
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "AWeapon.hpp"

int main()
{
	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	Character brother(*zaz);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->recoverAP();
	std::cout << *zaz;
	zaz->recoverAP();
	std::cout << brother;

	return 0;
}