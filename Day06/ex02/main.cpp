//
// Created by Oleh IVANYTSKYI on 2019-07-04.
//


#include "Base.hpp"

Base * generate(void)
{
	int r = rand() % 3;
	switch (r)
	{
		case 1 :
			return (new C);
		case 2 :
			return (new B);
		default:
			return (new A);
	}
}

void identify_from_pointer( Base * p )
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "TYPE A by pointer" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "TYPE B by pointer" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "TYPE C by pointer" << std::endl;
	}
}

void identify_from_reference( Base & p )
{
	if (dynamic_cast<A*>(&p))
	{
		std::cout << "TYPE A by reference" << std::endl;
	}
	else if (dynamic_cast<B*>(&p))
	{
		std::cout << "TYPE B by reference" << std::endl;
	}
	else if (dynamic_cast<C*>(&p))
	{
		std::cout << "TYPE C by reference" << std::endl;
	}
}

int main()
{
	srand(static_cast<uint>(time(nullptr)));
	Base *test = generate();
	Base *test1 = generate();
	Base *test2 = generate();

	identify_from_pointer(test);
	identify_from_reference(*test);
	std::cout << std::endl;
	identify_from_pointer(test1);
	identify_from_reference(*test1);
	std::cout << std::endl;
	identify_from_pointer(test2);
	identify_from_reference(*test2);
	return (0);
}
