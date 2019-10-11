//
// Created by Oleh IVANYTSKYI on 2019-10-11.
//

#ifndef CPP_DAY00_MUTANTSTACK_H
#define CPP_DAY00_MUTANTSTACK_H

#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

public:
	MutantStack() : std::stack<T>() { }

	virtual ~MutantStack() { }

	MutantStack(MutantStack const &src) : std::stack<T>(src)
	        { *this = src;}

	using std::stack<T>::operator=;

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(void) { return std::begin(std::stack<T>::c); }
	iterator end(void) { return std::end(std::stack<T>::c); }

private:

};


#endif //CPP_DAY00_MUTANTSTACK_H
