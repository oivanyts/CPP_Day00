//
// Created by Oleh IVANYTSKYI on 2019-10-08.
//

#ifndef CPP_DAY00_PRESIDENTIALPARDONFORM_H
#define CPP_DAY00_PRESIDENTIALPARDONFORM_H


#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{

public:
	PresidentialPardonForm();

	PresidentialPardonForm(std::string target);

	~PresidentialPardonForm();

	PresidentialPardonForm(PresidentialPardonForm const &src);

	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

	void	execute(Bureaucrat const & executor) const;

private:

};


#endif //CPP_DAY00_PRESIDENTIALPARDONFORM_H
