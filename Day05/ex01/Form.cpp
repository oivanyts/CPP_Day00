//
// Created by Oleh IVANYTSKYI on 2019-07-02.
//

#include "Form.hpp"

Form::Form() {}

Form::Form(Form const &src) {
	*this = src;
}

Form &Form::operator=(Form const &rhs) {
	if (this != &rhs) // add coping inside if
	{
		_name = rhs._name;
		_sign = rhs._sign;
		_grade = rhs._grade;
	}
	return *this;
}

Form::~Form() {}
Form::Form(std::string name, bool sign, int grade) : _name(name), _sign(sign),
													_grade(grade) {

}
const std::string &Form::getName() const {
	return _name;
}
bool Form::sign() const {
	return _sign;
}
int Form::getGrade() const {
	return _grade;
}


