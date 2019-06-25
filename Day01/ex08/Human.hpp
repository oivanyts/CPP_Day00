//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#ifndef HUMAN_HPP
#define HUMAN_HPP


#include <string>

class Human
{
private:
	std::string	actTable[3];
	void meleeAttack(std::string const & target);
	void rangedAttack(std::string const & target);
	void intimidatingShout(std::string const & target);
	typedef void (Human::*FunctionCallback)(std::string const &target);
	std::string act_tab[3];
	FunctionCallback func[3];
public:

	Human();

	void action(std::string const & action_name, std::string const & target);
};


#endif //HUMAN_HPP
