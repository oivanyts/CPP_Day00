//
// Created by Oleh IVANYTSKYI on 2019-10-08.
//

#ifndef CPP_DAY00_ROBOTOMYREQUESTFORM_H
#define CPP_DAY00_ROBOTOMYREQUESTFORM_H


#include "Form.hpp"

class RobotomyRequestForm : public Form
{

	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

	void	execute(Bureaucrat const & executor) const;

private:

};


#endif //CPP_DAY00_ROBOTOMYREQUESTFORM_H
