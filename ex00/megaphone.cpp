//
// Created by Oleh IVANYTSKYI on 2019-06-19.
//
#include <iostream>
using	std::cout;
using	std::string;
using	std::endl;

int			main(int ac, char *av[])
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			std::string str(av[i]);
			for (unsigned long j = 0; j < str.size(); j++)
			{
				cout << static_cast<char>(toupper(str.at(j)));
			}
			(i + 1 < ac) ? cout << " " : nullptr;
		}
		cout << endl;
	}
	else
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}

}