//
// Created by Oleh IVANYTSKYI on 2019-07-02.
//

#ifndef CPP_DAY00_BUREAUCRAT_HPP
#define CPP_DAY00_BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;
class Bureaucrat {

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);

	~Bureaucrat();

	void				incGrade();
	void				decGrade();
	void				setGrade(int grade);
	std::string			getName() const;
	int 				getGrade() const;
	void				signForm(Form &onSign);

private:
	Bureaucrat();
	Bureaucrat 			&operator=(Bureaucrat const &rhs);
	std::string const	_name;
	int					_grade;


public:
	class GradeTooLowException  : public std::exception
	{
	public:
		GradeTooLowException();
		GradeTooLowException(int grade, std::string _name);
		GradeTooLowException(const GradeTooLowException &src);
		virtual 	~GradeTooLowException() throw();

		GradeTooLowException	&operator=(const GradeTooLowException &rhs);
		virtual const char		*what() const throw();

	private:
		std::string	const	errMsg;
	};
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		GradeTooHighException(int grade, std::string _name);
		GradeTooHighException(const GradeTooHighException &src);
		virtual ~GradeTooHighException() throw();

		GradeTooHighException	&operator=(const GradeTooHighException &rhs);
		virtual const char    *what() const throw();

	private:
		std::string	const	errMsg;
	};
};

std::ostream		&operator<<(std::ostream &out, const Bureaucrat &rsh);


#endif //CPP_DAY00_BUREAUCRAT_HPP
