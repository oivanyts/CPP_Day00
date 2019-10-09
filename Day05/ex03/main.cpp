//
// Created by Oleh IVANYTSKYI on 2019-07-02.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "Intern.h"

int main()
{
	try
	{

		Intern		newbee;


		Form 	*prForm;
		Form 	*shrForm;
		Form 	*robForm;


		prForm  = newbee.makeForm("presidential pardon", "Mr.President");
		shrForm  = newbee.makeForm("robotomy request", "Robot");
		robForm  = newbee.makeForm("shrubbery creation", "Tree");
		Bureaucrat	a("buro100", 100);
		Bureaucrat	b("buro4", 4);
		Bureaucrat	c("buro10", 10);



		a.signForm(*prForm);
		b.signForm(*shrForm);
		c.signForm(*robForm);
		a.executeForm(*shrForm);
		c.executeForm(*prForm);
		b.executeForm(*robForm);

		std::cout << *prForm;
		std::cout << *shrForm;
		std::cout << *robForm;


	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;

	}
	return (0);
}
