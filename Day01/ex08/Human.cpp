//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#include <iostream>
#include "Human.hpp"



void Human::meleeAttack( std::string const &target )
{
	std::cout << "*hits by hand* >" << target <<std::endl;

}

void Human::rangedAttack( std::string const &target )
{
	std::cout << "*hits by arrow* " << target << std::endl;

}

void Human::intimidatingShout( std::string const &target )
{
	std::cout << "*GLORY TO UKRAINE* " << target << std::endl;
}


void Human::action( std::string const &action_name, std::string const &target )
{
	for (int i = 0; i < 3; i++)
	{
		!(action_name.compare(act_tab[i])) ? (this->*func[i])(target) :
		(void)0;
	}
}

Human::Human()
{
	this->func[0] = &Human::meleeAttack;
	this->func[1] = &Human::rangedAttack;
	this->func[2] = &Human::intimidatingShout;

	this->act_tab[0] = "meleeAttack";
	this->act_tab[1] = "rangedAttack";
	this->act_tab[2] = "intimidatingShout";
}
