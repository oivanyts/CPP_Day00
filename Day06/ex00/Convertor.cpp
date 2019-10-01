//
// Created by Oleh IVANYTSKYI on 2019-07-03.
//

#include "Convertor.hpp"
#include <cmath>
#include <iomanip>

Convertor::Convertor() {}

Convertor::Convertor(Convertor const &src) {
	*this = src;
}

Convertor &Convertor::operator=(Convertor const &rhs) {
	if (this != &rhs) // add coping inside if
	{
		_inputed = rhs._inputed;
	}
	return *this;
}

Convertor::~Convertor() {}

Convertor::Convertor(char *str) {
	std::stringstream ss;

	_inputed = str;
	if (_inputed.size() == 1 && isprint(_inputed[0]) && !isdigit(_inputed[0]))
		_d = _inputed[0];
	else if (_inputed.size() == 3 && _inputed[0] == '\'' && _inputed[2] == '\''
			&& isprint(_inputed[1]))
		_d = _inputed[1];
	else
	{
		if (_inputed[_inputed.length() - 1] == 'f')
			_inputed.erase(_inputed.rfind('f'));
		ss << _inputed;
		ss >> _d;
		if (ss.bad() || ss.fail() || !ss.eof()) {
			throw std::exception();
		}
	}
}

Convertor::Convertor(long double num, bool sign) : _d(num){
	if (!sign)
		_d *= -1;
}

void Convertor::outputConversion() {

	std::cout << std::setprecision(1) << "char = ";

	if (isprint(static_cast<char>(_d)) && static_cast<int>(_d) ==
	static_cast<char>(_d))
		std::cout << "'" << static_cast<char>(_d) << "'" <<  std::endl;
	else if (static_cast<int>(_d) == static_cast<char>(_d))
		std::cout << " non printable" <<  std::endl;
	else
		std::cout << " imposible" <<  std::endl;

	if (static_cast<long>(_d) == static_cast<int>(_d))
		std::cout << "int = " << static_cast<int>(_d) << std::endl;
	else
		std::cout << "int = imposible" << std::endl;

	if (( _d <= std::numeric_limits<float>::max() &&
		_d >= -std::numeric_limits<float>::max())|| isnan(_d) || isinf(_d))
		std::cout << "float = " << std::fixed << static_cast<float>(_d)

		<< "f" << std::endl;
	else
		std::cout << "float = imposible" <<  std::endl;

	if ((_d <= std::numeric_limits<double>::max() &&
		_d >= -std::numeric_limits<double>::max()) || isnan(_d) || isinf(_d))
		std::cout << "double = " << std::showpoint << _d << std::endl;
	else
		std::cout << "double = imposible" <<  std::endl;
}
