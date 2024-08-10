#include "DefineVar.hpp"
#include <cmath>
#include <iostream>
#include <cctype>
#include <climits>
#include <cstdlib>
#include <math.h>
#include <string>

VarType Definer::defineLiteral(const std::string& literal)
{
	if (isChar(literal))
		return CHAR;
	if (isInt(literal))
		return INT;
	if (isFloat(literal))
		return FLOAT;
	if (isDouble(literal))
		return DOUBLE;
	else
		return ERROR;
}

void Definer::printChar(const std::string& literal)
{
	char c = static_cast<char>(literal[0]);
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void Definer::printInt(const std::string& literal)
{
	int i = std::stoi(literal.c_str(), NULL, 10);
	std::cout << "char: ";
	if(i >= 0 && i <= 127)
	{
		if (isprint(i))
			std::cout << static_cast<char>(i)<< std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;

}

void Definer::printFloat(const std::string& literal)
{
	char* term;
	float f = std::strtof(literal.c_str(), &term);
	std::cout << "char: ";
	if(f >= 0 && f <= 127)
	{
		if (isprint(f))
			std::cout << static_cast<char>(f)<< std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (f - static_cast<int>(f))
	{
		std::cout << "float: " << f << 'f' << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
	else
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	}

}

void Definer::printDouble(const std::string& literal)
{
	(void)literal;
	std::cout << "double: " << std::endl;

}

bool Definer::isChar(const std::string &literal)
{
	if (literal.size() == 1 && isprint(literal[0]) && !isdigit(literal[0]))
		return true;
	return false;
}

bool Definer::isInt(const std::string& literal)
{
	char* term;
	long val = std::strtol(literal.c_str(), &term, 10);
	if(*term == '\0' && val <= INT_MAX && val >= INT_MIN)
		return true;
	return false;

}

bool is_inff(const std::string& arg)
{
	int i = 0;
	while (arg[i] == '+' || arg[i] == '-')
		i++;
	if (!arg.compare(i, arg.size() - i ,"inff"))
		return true;
	return false;
}

bool Definer::isFloat(const std::string& literal)
{
	char* term;

	float val = std::strtof(literal.c_str(), &term);
	if (((*term == 'f' && *(term + 1) == '\0') && (val != HUGE_VALF)) || is_inff(literal))
		return true;
	return false;
}

bool is_inf(const std::string& arg)
{
	int i = 0;
	while (arg[i] == '+' || arg[i] == '-')
		i++;
	if (!arg.compare(i, arg.size() - i ,"inf"))
		return true;
	return false;
}

bool Definer::isDouble(const std::string& literal)
{
	char* term;
	double val = std::strtod(literal.c_str(), &term);
	if((*term == '\0' && val != HUGE_VAL) || is_inf(literal))
		return true;
	return false;

}

