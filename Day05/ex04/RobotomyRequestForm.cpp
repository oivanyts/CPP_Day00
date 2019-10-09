//
// Created by Oleh IVANYTSKYI on 2019-10-08.
//

#include <fstream>
#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() : Form("target", 72, 45)
{


}

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (&rhs != this)
	{}
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	std::cout << target + "aaa" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	srand(time(nullptr));
	if (isSign() && executor.getGrade() <= getExGrade())
	{
		std::cout << "* GHRRRRR... DZZZRRR... BRGHRRRRR... *" << std::endl;
		if (rand() % 2)
		{
			std::cout << executor.getName() << " has been robotomized successfully" << std::endl;
		}
		else
		{
			std::cout << executor.getName() << " has failed to be robotomized" << std::endl;
		}

	}
	else if (!isSign())
	{
		std::cout << "Form " << getName() << " is not signed. Cannot be executed" << std::endl;
	}
	else
		throw GradeTooLowException(executor.getName(), false);
}
