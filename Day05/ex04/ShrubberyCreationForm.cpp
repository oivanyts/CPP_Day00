//
// Created by Oleh IVANYTSKYI on 2019-10-08.
//

#include <fstream>
#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (&rhs != this)
	{}
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{

}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (isSign() && executor.getGrade() <= getExGrade())
	{
		std::string		fileName(getName() + "_shrubbery");
		std::ofstream	file;
		file.open(fileName);

		if (file.fail())
			throw std::runtime_error("file dont opens");

		file << "                                  # #### ####" << std::endl <<
			 "                                ### \\/#|### |/####" << std::endl <<
			 "                               ##\\/#/ \\||/##/_/##/_#" << std::endl <<
			 "                             ###  \\/###|/ \\/ # ###" << std::endl <<
			 "                           ##_\\_#\\_\\## | #/###_/_####" << std::endl <<
			 "                          ## #### # \\ #| /  #### ##/##" << std::endl <<
			 "                           __#_--###`  |{,###---###-~" << std::endl <<
			 "                                     \\ }{" << std::endl <<
			 "                                      }}{" << std::endl <<
			 "                                      }}{" << std::endl <<
			 "______________________________________{{}__________________" << std::endl <<
			 "                                , -=-~{ .-^- _" << std::endl <<
			 "                                      `}" << std::endl <<
			 "                                       {" << std::endl;
		file.close();
	}
	else if (!isSign())
	{
		std::cout << "Form " << getName() << " is not signed. Cannot be executed" << std::endl;
	}
	else
		throw GradeTooLowException(executor.getName(), false);
}
