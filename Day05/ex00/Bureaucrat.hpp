//
// Created by Oleh IVANYTSKYI on 2019-07-02.
//

#ifndef CPP_DAY00_BUREAUCRAT_HPP
#define CPP_DAY00_BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {

	Bureaucrat();
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();

	Bureaucrat 		&operator=(Bureaucrat const &rhs);

	void			incGrade();
	void			decGrade();
	void			setGrade(int grade);
	std::string		getName() const;
	int 			getGrade() const;

private:

	std::string 	_name;
	int				_grade;


public:
	class GradeTooLowException  : public std::exception
	{
	public:
					GradeTooLowException();
					GradeTooLowException(const GradeTooLowException &src);
		virtual 	~GradeTooLowException() throw();

		GradeTooLowException	&operator=(const GradeTooLowException &rhs);
		virtual const char		*what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		GradeTooHighException(const GradeTooHighException &src);
		virtual ~GradeTooHighException() throw();

		GradeTooHighException	&operator=(const GradeTooHighException &rhs);
		virtual const char    *what() const throw();
	};
};

std::ostream		&operator<<(std::ostream &out, const Bureaucrat &rsh);


#endif //CPP_DAY00_BUREAUCRAT_HPP
