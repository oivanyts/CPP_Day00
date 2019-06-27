//
// Created by Oleh IVANYTSKYI on 2019-06-26.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

private:

	int 				_value;
	static const int	_bits = 8;
public:

				Fixed();
				~Fixed();
				Fixed( Fixed const &src );
				Fixed(const int value);
				Fixed(const float value);

	Fixed		&operator=(Fixed const &rhs);
	bool		operator>(Fixed const &rhs) const;
	bool		operator<(Fixed const &rhs) const;
	bool		operator>=(Fixed const &rhs) const;
	bool		operator<=(Fixed const &rhs) const;
	bool		operator==(Fixed const &rhs) const;
	bool		operator!=(Fixed const &rhs) const;
	Fixed		operator+(Fixed const &rhs) const;
	Fixed		operator-(Fixed const &rhs) const;
	Fixed		operator*(Fixed const &rhs) const;
	Fixed		operator/(Fixed const &rhs) const;
	Fixed		&operator++();
	const Fixed	operator++(int);
	Fixed		&operator--();
	const Fixed	operator--(int);
	float		toFloat( void ) const;
	int 		toInt( void ) const;
	int			getRawBits(void) const;
	int			getValue() const;
	void		setRawBits(int const raw);

	static Fixed &max(Fixed &fixed, Fixed &fixed1);
	static Fixed &min(Fixed &fixed, Fixed &fixed1);
	static Fixed const  &max(Fixed const &fixed, Fixed const &fixed1);
	static Fixed const &min(Fixed const &fixed, Fixed const &fixed1);
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif //FIXED_HPP
