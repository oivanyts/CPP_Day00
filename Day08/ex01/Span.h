//
// Created by Oleh IVANYTSKYI on 2019-10-11.
//

#ifndef CPP_DAY00_SPAN_H
#define CPP_DAY00_SPAN_H


#include <vector>

class Span
{

	Span();
public:
	Span(unsigned int size);

	~Span();

	Span(Span const &src);

	Span &operator=(Span const &rhs);

	void	addNumber(int i);
	void addNumber(int *i, int size);


	void 	addVector(std::vector<int> src);

	long	shortestSpan();
	long	longestSpan();

private:

	std::vector<int>	arr;
	size_t const		size_;


};


#endif //CPP_DAY00_SPAN_H
