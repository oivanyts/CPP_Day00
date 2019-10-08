
//
// Created by Oleh IVANYTSKYI on 2019-07-02.
//
#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b("Bob", 1);
		std::cout << b << std::endl;
		std::cout << " * Set grade" << std::endl;
		b.setGrade(150);
		std::cout << b << std::endl
				<< " * incrementing " << std::endl;
		b.incGrade();
		std::cout << b << std::endl
				<< " * decrementing x2" << std::endl;
		b.decGrade();
		b.decGrade();


//		std::cout << " * Too low grade" << std::endl;
//		Bureaucrat bLow("Alice", 420);

		std::cout << " * Too high" << std::endl;
		Bureaucrat bHigh("Peter", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION: "<< e.what() << std::endl;
	}
}
