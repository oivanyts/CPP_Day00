//
// Created by Oleh IVANYTSKYI on 2019-06-24.
//

#include "pony.hpp"


//Pony::Pony()
//{
//	std::cout << "ccc" << std::endl;
//}

Pony::~Pony()
{
	std::cout << "ddd" << std::endl;
}


Pony::Pony( std::string name ) : _name(name)
{
	std::cout << "ccc" << name <<  std::endl;
}

Pony Pony::ponyOnTheStack( std::string name )
{
	return Pony(name);
}

Pony *Pony::ponyOnTheHeap( std::string name )
{
	return (new Pony(name));
}



