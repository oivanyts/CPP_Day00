//
// Created by Oleh IVANYTSKYI on 2019-07-03.
//

#ifndef CPP_DAY00_CONVERTOR_HPP
#define CPP_DAY00_CONVERTOR_HPP

#include <iostream>
#include <sstream>

class Convertor {

public:

	Convertor(long double num, bool sign);
	Convertor(char *str);
	Convertor &operator=(Convertor const &rhs);

	void outputConversion();

	~Convertor();
private:
	Convertor(Convertor const &src);
	Convertor();

	std::string	_inputed;
	long double	_d;
};


#endif //CPP_DAY00_CONVERTOR_HPP
