//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#include "FragTrap.hpp"

std::string getNames()
{
	std::string	names[] = {
			"Itchy",
			"Scratchy",
			"Tom",
			"Jerry"
	};
	return (names[rand() % sizeof(names) / sizeof(*names)]);
}

int main()
{
	srand(time(nullptr));

	FragTrap a(getNames());
	FragTrap b(a);

	b.setName(getNames());
	a.vaulthunter_dot_exe(getNames());
	a.takeDamage(13);
	a.takeDamage(13);
	a.vaulthunter_dot_exe(getNames());
	a.takeDamage(13);
	b.vaulthunter_dot_exe(getNames());
	b.vaulthunter_dot_exe(getNames());
	b.beRepaired(222);
	a.vaulthunter_dot_exe(getNames());
	b.vaulthunter_dot_exe(getNames());
	a.vaulthunter_dot_exe(getNames());
	a.vaulthunter_dot_exe(getNames());

	return 0;
}
