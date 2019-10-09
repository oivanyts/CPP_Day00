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

Bureaucrat::Bureaucrat(Bureaucrat const &src) :  _name(src._name){
	*this = src;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs){
	if (this != &rhs) // add coping inside if
	{
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
		throw Bureaucrat::GradeTooHighException(grade, _name);
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException(grade, _name);
	} else {
		_grade = grade;
	}
}

void Bureaucrat::signForm(Form &onSign)
{

	if (!onSign.isSign() && onSign.getSignGrade() >= _grade)
	{
		std::cout << "<" << _name <<"> signs <" <<
		onSign.getName() << ">" << std::endl;
		onSign.beSigned(*this);
	}
	else if (onSign.isSign())
		std::cout << "<" << onSign.getName() << "> is already signed" << std::endl;
	else
		std::cout << "<" << _name <<"> cannot sign <" << onSign.getName()
		<< "> because his grade is too low" << std::endl;
}

void Bureaucrat::executeForm(Form const &form)
{
	if (form.getExGrade() >= _grade)
	{
		std::cout << "<" << _name <<"> executes <" <<
				  form.getName() << ">" << std::endl;
		form.execute(*this);
	}
	else
		std::cout << "<" << _name <<"> cannot execute <" << form.getName()
				  << "> because his grade is too low" << std::endl;

}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
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
	return (errMsg.c_str());
}

Bureaucrat::GradeTooLowException::GradeTooLowException(int grade,
		std::string _name) : errMsg(std::to_string(grade) + " is too low for " + _name)
{

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
	return (errMsg.c_str());
}

Bureaucrat::GradeTooHighException::GradeTooHighException(int grade,
		std::string _name) : errMsg(std::to_string(grade) + " is too high for " + _name)
{

}
