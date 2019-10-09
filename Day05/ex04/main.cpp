//
// Created by Oleh IVANYTSKYI on 2019-07-02.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "Intern.h"
#include "OfficeBlock.h"

int main()
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	try
	{
		ob.doBureaucracy("shrubbery creation", "HAHA");
	}
	catch (OfficeBlock::NoInternException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoSignerException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoExecuterException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::SignerLowGradeException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::ExecuterLowGradeException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
