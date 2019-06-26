//
// Created by Oleh IVANYTSKYI on 2019-06-26.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

private:

	int _value;
	static const int _bits = 8;
public:

	Fixed();
	~Fixed();
	Fixed( Fixed const &src );
	Fixed(const int value);
	Fixed(const float value);

	Fixed	&operator=(Fixed const &rhs);
	float	toFloat( void ) const;
	int 	toInt( void ) const;
	int		getRawBits(void) const;
	int		getValue() const;
	void	setRawBits(int const raw);

};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif //FIXED_HPP
