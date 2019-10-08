//
// Created by Oleh IVANYTSKYI on 2019-07-02.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form		a("form140", 140, 11);
		Form		z("<TooLow ExGrade>", 140, 11111);
		Form		x("<TooLow SignGrade>", 11111, 11);
		Form		w("<TooHigh SignGrade>", 0, 11);
		Form		y("<TooHigh ExGrade>", 11, 0);
		Bureaucrat	b("buro150", 150);
		Bureaucrat	c("buro10", 10);

		b.signForm(a);
		std::cout << a << std::endl << b << std::endl;

		c.signForm(a);
		std::cout << a << std::endl << c << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;

	}
	return (0);
}
