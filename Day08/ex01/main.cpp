//
// Created by Oleh IVANYTSKYI on 2019-10-11.
//

#include <iostream>
#include <vector>
#include "Span.h"

int	main()
{
	srand(time(0));
	try
	{

		Span 				sp = Span(10000);
//		int					tmp[] = {5 , 3, 17, 9, 11};

//		sp.addNumber(5);
//		sp.addNumber(3);
//		sp.addNumber(17);
//		sp.addNumber(9);
//		sp.addNumber(11);


		for (int i = 0; i < 10000; ++i)
		{
			sp.addNumber(rand() % 100000);
		}
//		sp.addNumber(tmp,5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << " Error: "<< e.what() << std::endl;
	}
	catch  (...)
	{
		std::cout << " Unknown error"<< std::endl;
	}


	return (1);
}
