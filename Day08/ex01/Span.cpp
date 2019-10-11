//
// Created by Oleh IVANYTSKYI on 2019-10-11.
//

#include <iostream>
#include "Span.h"

Span::Span() : size_(0)
{

}

Span::~Span()
{

}

Span::Span(Span const &src) : size_(src.size_)
{
	*this = src;
}

Span &Span::operator=(Span const &rhs)
{
	if (&rhs != this)
	{
		arr = rhs.arr;
	}
	return *this;
}

void Span::addNumber(int number)
{
	if (arr.size() < size_)
		arr.push_back(number);
	else
		throw std::runtime_error("array is full");
	std::sort(arr.begin(), arr.end());
}


long Span::shortestSpan()
{
	long ret = std::numeric_limits<long>::max();

	if (arr.size() < 2)
		throw std::runtime_error("array is too small");
	for (unsigned int i = 1; i < arr.size() ; i++)
	{
		if (arr[i] - arr[i - 1] < ret)
			ret = arr[i] - arr[i - 1];
	}
	return (ret);
}

long Span::longestSpan()
{
	if (arr.size() < 2)
		throw std::runtime_error("array is too small");
	return (*arr.rbegin() - *arr.begin());
}

Span::Span(unsigned int size) : size_(size)
{

}

void Span::addVector(std::vector<int> src)
{
	for (std::vector<int>::iterator wrapIter = src.begin(); wrapIter != src.end(); ++wrapIter)
	{
		addNumber(*wrapIter);
	}
}

void Span::addNumber(int *i, int size)
{
	for (int j = 0; j < size ; ++j)
	{
		addNumber(i[j]);
	}
}
