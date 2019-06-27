//
// Created by Oleh IVANYTSKYI on 2019-06-26.
//

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _value(0) {
}

Fixed::~Fixed() {
}

int Fixed::getRawBits(void) const {
	return _value;
}

void Fixed::setRawBits(int const raw) {
	_value = raw;
}

Fixed::Fixed(Fixed const &src) {
	*this = src;
}

int Fixed::getValue() const {
	return _value;
}

Fixed::Fixed(const int value) {
	this->_value = value << _bits;
}

Fixed::Fixed(const float value) {
	this->_value = roundf(value * (1 << _bits));
}

float Fixed::toFloat(void) const {
	return ((float) this->_value / (1 << _bits));
}

int Fixed::toInt(void) const {
	return (static_cast<int>(this->_value >> _bits));
}

Fixed &Fixed::operator=(Fixed const &rhs)
		{
	if (this == &rhs)
	{
		return *this;
	}
	this->_value = rhs.getValue();
	return *this;
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	return Fixed( static_cast<float>(this->_value + rhs.getValue()) / (1 << _bits));
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return Fixed( static_cast<float>(this->_value - rhs.getValue()) / (1 << _bits) );
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	Fixed	tmp;
	int64_t m1 = static_cast<int64_t>(this->_value);
	int64_t m2 = static_cast<int64_t>(rhs.getValue());

	tmp._value = (m1 * m2) >> 8;
	return (tmp);
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	Fixed	tmp;
	int64_t m1 = static_cast<int64_t>(this->_value) << 8;
	int64_t m2 = static_cast<int64_t>(rhs.getValue());
	if (!m2)
		std::cout << "Division by zero" << std::endl;
	tmp._value = m1 / m2;
	return (tmp);
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return (this->_value > rhs.getValue());
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->_value < rhs.getValue());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_value >= rhs.getValue());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_value <= rhs.getValue());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->_value == rhs.getValue());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_value != rhs.getValue());
}

Fixed &Fixed::operator++() {

	this->_value += 1;
	return *this;
}

const Fixed Fixed::operator++(int) {

	Fixed	ret(*this);
	++(*this);
	return ret;
}

Fixed &Fixed::operator--() {
	this->_value -= 1;
	return *this;
}

const Fixed Fixed::operator--(int) {
	Fixed	ret(*this);
	--(*this);
	return ret;
}

Fixed &Fixed::max(Fixed &fixed, Fixed &fixed1) {
	return (fixed._value > fixed1._value) ? fixed : fixed1;
}

Fixed &Fixed::min(Fixed &fixed, Fixed &fixed1) {
	return (fixed._value > fixed1._value) ? fixed1 : fixed;;
}

Fixed const &Fixed::max(Fixed const &fixed, Fixed const &fixed1) {
	return (fixed._value > fixed1._value) ? fixed : fixed1;
}

Fixed const &Fixed::min(Fixed const &fixed, Fixed const &fixed1) {
	return (fixed._value > fixed1._value) ? fixed1 : fixed;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
	o << rhs.toFloat();
	return (o);
}
