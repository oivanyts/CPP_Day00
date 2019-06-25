//
// Created by Oleh IVANYTSKYI on 2019-06-25.
//

#include <fstream>
#include <iostream>

int main( int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "ERROR";
		return 0;
	}
	else
	{
		std::ifstream	f1;
		f1.open(av[1]);
		if (f1.bad() || f1.fail() || !f1.is_open())
		{
			std::cout << "ERROR" << std::endl;
			return (1);
		}
		if (!av[2][0] || !av[3][0])
		{
			std::cout << "ERROR" << std::endl;
			return (2);
		}
		std::string		str1(av[2]);
		std::string		str2(av[3]);
		std::string		filename(av[1]);
		std::string		line;
		std::string		newfilestr;
		filename += ".replace";
		std::ofstream	f2(filename);
		if (f2.bad() ||  f2.fail())
			return (3);
		while (getline(f1, line))
		{
			newfilestr += line + '\n';
		}
		f1.close();
		std::size_t found = 0;
		while (1)
		{
			found = newfilestr.find(str1, !found ?  0 : found + str2.length());
			if (found!=std::string::npos)
			{
				newfilestr.replace(found, str1.length(), str2);
			}
			else
			{
				break ;
			}
		}
		f2 << newfilestr;
	}
}
