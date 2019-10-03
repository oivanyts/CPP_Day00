//
// Created by Oleh IVANYTSKYI on 2019-06-26.
//

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits( int const raw )
{
    _value = raw;
}

Fixed &Fixed::operator=( Fixed const &rhs )
{
    std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getValue();
	return *this;
}

Fixed::Fixed( Fixed const &src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return ;
}

int Fixed::getValue() const
{
    return _value;
}


