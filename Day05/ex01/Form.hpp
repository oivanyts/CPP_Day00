//
// Created by Oleh IVANYTSKYI on 2019-07-02.
//

#ifndef CPP_DAY00_FORM_HPP
#define CPP_DAY00_FORM_HPP

#include <iostream>
#include "../ex00/Bureaucrat.hpp"


class Form {

public:
						Form();
						Form(std::string name, bool	sign, int grade);
						Form(Form const &src);
	virtual				~Form();
	Form				&operator=(Form const &rhs);
	const std::string	&getName() const;
	bool				sign() const;
	int 				getGrade () const;

class GradeTooLowException : public std::exception {
		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const &);
		~GradeTooLowException();
		GradeTooLowException	&operator=(GradeTooLowException const &rhs);
	};
	class GradeTooHighException : public std::exception {
		GradeTooHighException();
		GradeTooHighException(GradeTooLowException const &);
		~GradeTooHighException();
		GradeTooHighException	&operator=(GradeTooHighException const &rhs);
	};

private:
	std::string	const	_name;
	bool				_sign;
	int const			_grade;

};
std::ostream			&operator<<(std::ostream &out, const Bureaucrat &rsh);

#endif //CPP_DAY00_FORM_HPP
