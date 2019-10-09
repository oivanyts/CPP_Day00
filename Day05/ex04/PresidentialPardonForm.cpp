//
// Created by Oleh IVANYTSKYI on 2019-10-08.
//

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm()
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (&rhs != this)
	{}
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{

}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (isSign() && executor.getGrade() <= getExGrade())
	{
		std::cout << getName() + " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else if (!isSign())
	{
		std::cout << "Form " << getName() << " is not signed. Cannot be executed" << std::endl;
	}
	else
		throw GradeTooLowException(executor.getName(), false);
}
