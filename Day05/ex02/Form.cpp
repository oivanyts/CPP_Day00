//
// Created by Oleh IVANYTSKYI on 2019-07-02.
//

#include "Form.hpp"

Form::Form() : name_(""), sign_(false), signGrade_(0), exGrade_(0) {}

Form::Form(Form const &src) : name_(src.name_), sign_(src.sign_), signGrade_(src.signGrade_), exGrade_(src.exGrade_) {
	*this = src;
}

Form &Form::operator=(Form const &rhs) {
	if (this != &rhs)
	{
		sign_ = rhs.sign_;
	}
	return *this;
}

Form::~Form() { }

Form::Form(std::string name, int signGrade, int exGrade) : name_(name),
														   sign_(false), signGrade_(signGrade), exGrade_(exGrade) {
	if (exGrade > 150 )
		throw GradeTooLowException(name, false);
	else if (exGrade < 1)
		throw GradeTooHighException(name, false);
	else if (signGrade > 150)
		throw GradeTooLowException(name, false);
	else if  (signGrade < 1)
		throw GradeTooHighException(name, false);
}

const std::string &Form::getName() const {
	return name_;
}

bool Form::isSign() const
{
	return sign_;
}

int Form::getSignGrade() const
{
	return signGrade_;
}

int Form::getExGrade() const
{
	return exGrade_;
}

void Form::beSigned(Bureaucrat &signer)
{
	if (signer.getGrade() <= signGrade_)
	{
		sign_ = true;
	}
	else if (signer.getGrade())
		throw GradeTooLowException(signer.getName(), true);

}

Form::GradeTooHighException::~GradeTooHighException() throw() { }

const char *Form::GradeTooHighException::what() const throw()
{
	return _errMsg.c_str();
}

Form::GradeTooHighException::GradeTooHighException() : _errMsg("") { }


Form::GradeTooHighException::GradeTooHighException(const Form::GradeTooHighException &src)
		: _errMsg(src._errMsg)

{
	*this = src;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(const Form::GradeTooHighException &rhs)
{
	if (this != &rhs)
	{

	}
	return *this;
}

Form::
GradeTooHighException::GradeTooHighException(std::string name, bool issign)
			: _errMsg(name + (issign ? " sign":" execute") + " grade is too high ")
{

}

Form::GradeTooLowException::GradeTooLowException()
{

}

Form::GradeTooLowException::GradeTooLowException(const Form::GradeTooLowException &src)
	: _errMsg(src._errMsg) { }

Form::GradeTooLowException &Form::GradeTooLowException::operator=(const Form::GradeTooLowException &rhs)
{
	if (this != &rhs)
	{ }
	return *this;
}

Form::GradeTooLowException::GradeTooLowException(std::string name, bool issign)
		: _errMsg(name + (issign ? " sign":" execute") + " grade is too low")
{

}

Form::GradeTooLowException::~GradeTooLowException() throw()
{

}

const char *Form::GradeTooLowException::what() const throw()
{
	return _errMsg.c_str();
}

std::ostream &operator<<(std::ostream &out, const Form &rsh)
{
	out << "Form name: [" << rsh.getName() << "]" <<std::endl

	<< "grade required to sign\t\t[" << rsh.getSignGrade() << "]" << std::endl
	<< "grade required to execute\t[" << rsh.getExGrade() << "]" << std::endl
	<< (rsh.isSign() ? "is SIGNED" : "is NOT SIGNED") << std::endl;
	return (out);
}
