//
// Created by Oleh IVANYTSKYI on 2019-10-11.
//

#include <iosfwd>
#include <fstream>
#include <sstream>
#include <iostream>
#include <queue>
#include "AInstructions.h"

//static char cpu[30000];


void openMind(std::stringstream stringstream)
{
	InstrCreator				creator;
	std::queue<AInstructions *>	toExecute;
	char 	curr;
	while (stringstream)
	{
		stringstream >> curr;
		toExecute.push()
	}
}

int main(int argc, char *argv[])
{
	if (argc != 1)
	{
		for (int i = 1; i < argc; ++i)
		{
			std::ifstream		file(argv[i]);
			if (file.bad())
			{
				std::cout << "file bad" << std::endl;
				continue;
			}
			std::stringstream	ss;
			ss << file.rdbuf();
			openMind(ss);
			std::cout << ss.str() << std::endl;
			file.close();
		}
	}
	else
	{

	}
	return (0);
}
