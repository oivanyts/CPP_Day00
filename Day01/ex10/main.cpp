//
// Created by Oleh IVANYTSKYI on 2019-06-26.
//

#include <string>
#include <fstream>
#include <iostream>

int main( int ac, char *av[])
{
	std::string buf;


	(void)av;
	if (ac == 1)
	{
		while (std::cin)
		{
			std::getline (std::cin, buf);
			std::cout << buf << std::endl;
		}
	}
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::ifstream curFile(av[i]);
			if (curFile.good())
			{
				std::cout << curFile.rdbuf() << std::endl;
				curFile.close();
			}
			else
			{
				std::cout << "ERROR. FILE DIDN'T OPENED" << std::endl;
			}
		}
	}
	return (0);
}
