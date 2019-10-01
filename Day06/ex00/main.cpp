//
// Created by Oleh IVANYTSKYI on 2019-07-03.
//

#include <iostream>
#include <sstream>
#include <cmath>
#include "Convertor.hpp"

int main(int ac, char *av[])
{
	if (ac != 2) {
		std::cout << "ERROR" << std::endl;
		return (0);
	}
	else {
		std::string  s(av[1]);

		if (s == "inf" || s == "-inf" || s == "+inf")
		{
			Convertor	b(std::numeric_limits<double>::infinity(), av[1][0] != '-');
			b.outputConversion();
		}
		else if (s == "-inff" || s == "inff")
		{
			Convertor	b(std::numeric_limits<float>::infinity(), av[1][0] != '-');
			b.outputConversion();
		}
		else {
			try {
				Convertor	b(av[1]);
				b.outputConversion();
			}
			catch (std::exception &e)
			{
				std::cout << "ERROR" << std::endl;
			}
		}
	}
}

