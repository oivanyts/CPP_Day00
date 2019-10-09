//
// Created by Oleh IVANYTSKYI on 2019-10-08.
//

#ifndef CPP_DAY00_SHRUBBERYCREATIONFORM_H
#define CPP_DAY00_SHRUBBERYCREATIONFORM_H


#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

public:
	ShrubberyCreationForm();

	ShrubberyCreationForm(std::string target);

	~ShrubberyCreationForm();

	ShrubberyCreationForm(ShrubberyCreationForm const &src);

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

	void	execute(Bureaucrat const & executor) const;

private:

};


#endif //CPP_DAY00_SHRUBBERYCREATIONFORM_H
