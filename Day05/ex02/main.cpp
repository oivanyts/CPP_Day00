//
// Created by Oleh IVANYTSKYI on 2019-07-02.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"

int main()
{
	try
	{
		PresidentialPardonForm	prForm("PresForm");
		ShrubberyCreationForm	shrForm("ShrForm");
		RobotomyRequestForm		robForm("RoboForm");

		Bureaucrat	a("buro100", 100);
		Bureaucrat	b("buro4", 4);
		Bureaucrat	c("buro10", 10);

		a.signForm(prForm);
		b.signForm(prForm);
		c.signForm(prForm);
		a.executeForm(prForm);
		c.executeForm(prForm);
		b.executeForm(prForm);

		a.signForm(shrForm);
		b.signForm(shrForm);
		c.signForm(shrForm);
		a.executeForm(shrForm);
		c.executeForm(shrForm);
		b.executeForm(shrForm);

		a.signForm(robForm);
		b.signForm(robForm);
		c.signForm(robForm);
		a.executeForm(robForm);
		c.executeForm(robForm);
		b.executeForm(robForm);
		std::cout << prForm;
		std::cout << shrForm;
		std::cout << robForm;


	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;

	}
	return (0);
}
