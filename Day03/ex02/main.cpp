//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

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
	srand(time(nullptr));

	FragTrap a(getNames());
	ScavTrap b(getNames());

	b.setName(getNames());
	a.vaulthunter_dot_exe(getNames());
	a.takeDamage(13);
	b.takeDamage(23);
	a.takeDamage(130);
	a.beRepaired(11);
	a.takeDamage(13);
	a.vaulthunter_dot_exe(getNames());
	a.takeDamage(13);
	b.challengeNewcomer();
	b.challengeNewcomer();
	b.beRepaired(222);
	a.vaulthunter_dot_exe(getNames());
	b.challengeNewcomer();
	a.vaulthunter_dot_exe(getNames());
	a.vaulthunter_dot_exe(getNames());
	a.takeDamage(13);
	b.takeDamage(23);
	a.takeDamage(130);
	a.takeDamage(13);
	b.takeDamage(23);
	a.beRepaired(11);
	b.beRepaired(15);
	a.beRepaired(11);
	b.beRepaired(222);
	return 0;
}