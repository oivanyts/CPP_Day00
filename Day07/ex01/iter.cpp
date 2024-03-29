//
// Created by Oleh IVANYTSKYI on 2019-07-05.
//

#include <bootstrap.h>
#include <string>
#include <iostream>

template <typename T>
void 	iter(T *array, unsigned int length,void (*func)(T const &))
{
	for (unsigned int i = 0; i < length ; i++) {
		(func)(array[i]);
	}
}
class Awesome {

public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }

private:
	int _n;};


std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {

	int tab[] = { 0, 1, 2, 3, 4 }; // <--- J'ai jamais compris pourquoi on peut pas ecrire int[] tab. Ca aurait plus de sens vous trouvez pas ?
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );

	return 0;
}
