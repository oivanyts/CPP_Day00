//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

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
	NinjaTrap    a(getNames());
	NinjaTrap    b(getNames());

	std::cout << std::endl << "First round!" << std::endl;
	b.ninjaShoebox(a);
	a.ninjaShoebox(b);

	std::cout << std::endl << "Second round!" << std::endl;
	b.ninjaShoebox(a);
	a.ninjaShoebox(b);

	std::cout << std::endl << "Third round!" << std::endl;
	b.ninjaShoebox(a);
	a.ninjaShoebox(b);
	return 0;
}