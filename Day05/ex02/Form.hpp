//
// Created by Oleh IVANYTSKYI on 2019-07-02.
//

#ifndef CPP_DAY00_FORM_HPP
#define CPP_DAY00_FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {

public:
						Form();
						Form(std::string name, int signGrade, int exGrade);
						Form(Form const &src);
	virtual				~Form();

	const std::string	&getName() const;
	bool				isSign() const;
	int					getSignGrade() const;
	int					getExGrade() const;
	Form				&operator=(Form const &rhs);
	void				beSigned(Bureaucrat &signer);

	class GradeTooLowException : public std::exception {

		GradeTooLowException	&operator=(const GradeTooLowException &rhs);
		std::string	const		_errMsg;
	public:

		GradeTooLowException();
		GradeTooLowException(const GradeTooLowException &src);
		GradeTooLowException(std::string name, bool issign);
		virtual ~GradeTooLowException() throw();
		virtual const char		*what() const throw();
	};

	class GradeTooHighException : public std::exception {

		GradeTooHighException();
		GradeTooHighException	&operator=(const GradeTooHighException &rhs);
		std::string	const		_errMsg;

	public:

		GradeTooHighException(const GradeTooHighException &src);
		GradeTooHighException(std::string name, bool issign);
		virtual ~GradeTooHighException() throw();
		virtual const char		*what() const throw();
	};
private:
	std::string	const	name_;
	bool				sign_;
	const int			signGrade_;
	const int 			exGrade_;

};
std::ostream			&operator<<(std::ostream &out, const Form &rsh);

#endif //CPP_DAY00_FORM_HPP
