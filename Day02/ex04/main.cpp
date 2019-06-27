//
// Created by Oleh IVANYTSKYI on 2019-06-26.
//



#include <string>
#include <iostream>
#include <sstream>
#include "Fixed.hpp"

Fixed	do_op(Fixed &a, Fixed &b,char op)
{
	if (op == '+')
		return(a + b);
	else if (op == '-')
		return(a - b);
	else if (op == '*')
		return(a * b);
	else if (op == '/')
		return(a / b);
	return (0);
}

//Fixed calc(std::stringstream count)
//{
//	std::cout << " GET " << count << std::endl;
//	return Fixed(0);
////}
//char peek()
//{
//
//}
//
//char get()
//{
//
//}

//Fixed expresion(std::string basicString) {
//	return Fixed();
//}

std::string cutSpace(char *str) {
	std::string ret;
	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (!isspace(str[i]))
		{
			ret += str[i];
		}
	}
	return (ret);
}

Fixed calculate(std::string expr) {

	int pos;

	if (expr.find('+', 1) != std::string::npos)
	{
		pos = expr.find('+');
		return (calculate(expr.substr(0, pos)) + calculate(expr.substr(pos + 1)));
	}
	else if (expr.find('-', 1) != std::string::npos)
	{
		pos = expr.find('-');
		return (calculate(expr.substr(0, pos)) - calculate(expr.substr(pos + 1)));
	}
	else if (expr.find('/') != std::string::npos)
	{
		pos = expr.find('/');
		return (calculate(expr.substr(0, pos)) / calculate(expr.substr(pos + 1)));
	}
	else if (expr.find('*') != std::string::npos)
	{
		pos = expr.find('*');
		return (calculate(expr.substr(0, pos)) * calculate(expr.substr(pos + 1)));
	}
	std::stringstream	ret(expr);
	float done;
	ret >> done;
	std::cout << "result " << done << std::endl;
	return Fixed(done);
}

Fixed cut_brackets(std::string expr) {

	Fixed res;
	int op_br_st = expr.find('(');
	int opened = 0;

	if (expr.find('(') == std::string::npos)
		return (res = calculate(expr));
	for (uint i = expr.find('('); i < expr.length(); i++)
	{
		if (expr[i] == '(')
		{
			opened++;
		}
		else if (expr[i] == ')')
		{
			opened--;
			if (!opened)
			{
				res = cut_brackets(expr.substr(op_br_st + 1, i - op_br_st - 1));
				std::stringstream	ret;
				ret << res.toFloat();
				expr.replace(op_br_st, i - op_br_st + 1, ret.str());
				return (cut_brackets(expr));
			}
		}
	}
	return (1);
}

//Fixed evaluete(std::string expr)
//{
//	Fixed	res;
//
//	res = cut_brackets(expr);
//	return res;
//}

int	main(int ac , char *av[] )
{
	if (ac != 2)
	{
		return 1;
	}
	else
	{
		std::string str;

		str = cutSpace(av[1]);
		std::cout<<str<<std::endl;
		Fixed result = cut_brackets(str);
		std::cout << result;
	}
	return 0;
}
