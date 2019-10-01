//
// Created by Oleh IVANYTSKYI on 2019-07-02.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	setGrade(grade);
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
	*this = src;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
	if (this != &rhs) // add coping inside if
	{
		_name = rhs._name;
		_grade = rhs._grade;
	}
	return *this;
}

std::string Bureaucrat::getName() const
{
	return _name;
}
int Bureaucrat::getGrade() const
{
	return _grade;
}
void Bureaucrat::incGrade()
{
	setGrade(_grade - 1);
}
void Bureaucrat::decGrade()
{
	setGrade(_grade + 1);
}
void Bureaucrat::setGrade(int grade)
{
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		_grade = grade;
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs)
{
	out << rhs.getName() << ", bureaucrat " << rhs.getGrade();
	return (out);
}


Bureaucrat::
GradeTooLowException::GradeTooLowException() {}

Bureaucrat::
GradeTooLowException::GradeTooLowException(
		const Bureaucrat::GradeTooLowException &src) {
	*this = src;
}
Bureaucrat::
GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException
&Bureaucrat::GradeTooLowException::operator=(const
		Bureaucrat::GradeTooLowException &) {
	return *this;
}
const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade too low...");
}

Bureaucrat::
GradeTooHighException::GradeTooHighException() {}

Bureaucrat::
GradeTooHighException::GradeTooHighException(
		const Bureaucrat::GradeTooHighException &src) {
	*this = src;
}

Bureaucrat::
GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::
GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(const
		Bureaucrat::GradeTooHighException &){
	return *this;
}
const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade is too high...");
}
