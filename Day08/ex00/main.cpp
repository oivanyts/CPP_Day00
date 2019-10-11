//
// Created by Oleh IVANYTSKYI on 2019-07-06.
//

#include <deque>
#include "easyfind.hpp"


void
testValue(int val)
{
    std::deque<int>    lst;

    lst.push_back(4);	// #0
    lst.push_back(8);	// #1
    lst.push_back(15);	// #2
    lst.push_back(16);	// #3
    lst.push_back(4);	// #4
    lst.push_back(42);	// #5


    std::cout << val << " -> ";
    try
    {
    	int 	a =  easyfind(lst, val);
        std::cout << a << std::endl;
    }
    catch (std::exception &)
    {
		std::cout << "couldn't find " << val << std::endl;
    }
}

int
main(void)
{
    testValue(1);
    testValue(4);
    testValue(16);
    testValue(29);
    testValue(42);
    return (0);
}
