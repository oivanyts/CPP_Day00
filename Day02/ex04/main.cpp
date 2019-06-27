//
// Created by Oleh IVANYTSKYI on 2019-06-26.
//



#include <string>
#include <iostream>
#include <sstream>
#include "Fixed.hpp"

bool gError;
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
		Fixed div = calculate(expr.substr(pos + 1));
		if (div == 0)
			return (0);
		return (calculate(expr.substr(0, pos)) / div);
	}
	else if (expr.find('*') != std::string::npos)
	{
		pos = expr.find('*');
		return (calculate(expr.substr(0, pos)) * calculate(expr.substr(pos + 1)));
	}
	std::stringstream	ret(expr);
	float done;
	ret >> done;
	return Fixed(done);
}

Fixed cutBrackets(std::string expr) {

	Fixed res;
	int opBrStart = expr.find('(');
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
				res = cutBrackets(expr.substr(opBrStart + 1, i - opBrStart - 1));
				std::stringstream	ret;
				ret << res.toFloat();
				expr.replace(opBrStart, i - opBrStart + 1, ret.str());
				return (cutBrackets(expr));
			}
		}
	}
	return (1);
}

bool valideExpr(std::string expr)
{
	int n = 0;
	const std::string tockens("+-().*/");

	for (uint i = 0; i < expr.length(); ++i)
	{
		if (isdigit(expr[i]))
			continue;
		else if (tockens.find(expr[i], 0) == std::string::npos)
		{
			std::cout << "BAD TOCKEN ["<<  expr[i] << "]" << std::endl;
			return false;
		}
		else if (expr[i + 1] && tockens.find(expr[i], 5) != std::string::npos &&
				tockens.find(expr[i + 1], 5) != std::string::npos)
		{
			std::cout << "BAD TOCKEN ["<< expr[i] << expr[i + 1] << "]" << i << std::endl;
			return false;
		}
		if (expr[i] == '(')
			n++;
		if (expr[i] == ')')
			n--;
	}
	if (n != 0)
		std::cout << "BAD BRACKETS"  << std::endl;
	return (n == 0);
}

int	main(int ac , char *av[] )
{
	if (ac != 2)
	{
		return 1;
	}
	else
	{
		std::string str(av[1]);
		str = cutSpace(av[1]);
		if (valideExpr(str))
			std::cout << cutBrackets(str) << std::endl;
	}
	return 0;
}
