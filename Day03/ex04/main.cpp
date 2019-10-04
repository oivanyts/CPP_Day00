//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

std::string getNames()
{
	std::string	names[] = {
			"Claptrap",
			"Cluck-Trap",
			"CU5TM-TP",
			"RT-FC",
			"CLAP-9000",
			"1D-TP"
	};
	return (names[rand() % sizeof(names) / sizeof(*names)]);
}

int main()
{
	srand(time(nullptr) * time(nullptr));

	std::cout << "FIGHT BEGINS"<< std::endl;
	SuperTrap   	a(getNames());
	NinjaTrap   	b(getNames());

	a.meleeAttack(b.getName());
	a.rangedAttack(b.getName());

	a.vaulthunter_dot_exe(b.getName());
	a.ninjaShoebox(b);

	return 0;
}
