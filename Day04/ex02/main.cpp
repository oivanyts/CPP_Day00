//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#include <cstdlib>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"


int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	Squad		test, *test1;

	test.push(bob);
	test.push(jim);
	test1 = new Squad(test);
	delete vlc;
	for (int i = 0; i < test1->getCount(); ++i)
	{
		ISpaceMarine *cur = test1->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete test1;
	return 0;
}
