//
// Created by Oleh IVANYTSKYI on 2019-07-02.
//

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("Bob", 1);
	std::cout << b << std::endl;

	std::cout << " * Set grade" << std::endl;
	b.setGrade(100);
	std::cout << b << std::endl;

	std::cout << " * Too low grade" << std::endl;
	try {
		Bureaucrat bLow("Alice", 420);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << " * Too high" << std::endl;
	try {
		Bureaucrat bHigh("Peter", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < 5; i++) {
		try {
			Bureaucrat bHigh("Peter", i * 30);
		}
		catch (Bureaucrat::GradeTooHighException &e) {
			std::cout << e.what() << std::endl;
		}
	}
}
