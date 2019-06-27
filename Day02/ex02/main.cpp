//
// Created by Oleh IVANYTSKYI on 2019-06-26.
//



#include <string>
#include <iostream>
#include "Fixed.hpp"

int	main( void )
{
	Fixed a;
	Fixed const b( Fixed( 1<<21 ) * Fixed( 2.1f ) );
	Fixed c(Fixed( 5555.05f ));
	Fixed const d(Fixed( 8000000.0f ) / Fixed( 4.01f ));

	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = ( 1<<21 * 2.1 ) = " << b << std::endl;
	std::cout << "d = ( 8e+06 / 4.01 ) = " << d << std::endl;
	std::cout << "b > d " << ((b > d) ? "true " : "false ") << std::endl;
	std::cout << Fixed::max(b,d) << " > " << Fixed::min(d,b)<< std::endl;
	std::cout << Fixed::max(a,c) << " > " << Fixed::min(a,c)<<  std::endl;

	return 0;
}
