//
// Created by Oleh IVANYTSKYI on 2019-06-24.
//

#include "pony.hpp"

void		ponyOnTheStack(std::string name)
{
	Pony	stackPony(name);

	std::cout << stackPony.getName() << " lived fun but short live"<< std::endl;
}

void		ponyOnTheHeap(std::string name)
{
	Pony		*heapPony = new Pony(name);
	std::string	ret;
	(void)heapPony;

	std::cout << heapPony->getName() << " lives until you press Ctrl+D"
				<< std:: endl;
	while (std::cin >> ret)
	{
		std::cout << heapPony->getName() << " doig fine" << std::endl;
	}
	delete heapPony;
}

int main()
{
	ponyOnTheStack("STACK");
	ponyOnTheHeap("HEAP");
	return (0);
}