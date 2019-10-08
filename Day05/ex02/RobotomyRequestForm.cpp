//
// Created by Oleh IVANYTSKYI on 2019-10-08.
//

#include <fstream>
#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() : Form("ShrubberyCreation", 145, 137)
{
	std::fstream	file;
	file.open("target_shrubbery");
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
{
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (&rhs != this)
	{}
	return *this;
}