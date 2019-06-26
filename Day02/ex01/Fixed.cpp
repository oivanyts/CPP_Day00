//
// Created by Oleh IVANYTSKYI on 2019-06-26.
//

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "DefDestructor" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw) {
	_value = raw;
}

Fixed &Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getValue();
	return *this;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

int Fixed::getValue() const {
	return _value;
}

Fixed::Fixed(const int value) {
	this->_value = value << _bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) {
	this->_value = roundf(value * (1 << _bits));
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const {
	return ((float) this->_value / (1 << _bits));
}

int Fixed::toInt(void) const {
	return (static_cast<int>(this->_value >> _bits));
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {

	o << rhs.toFloat();
	return (o);
}
