#include "DefineVar.hpp"
#include <cctype>
#include <climits>
#include <cstdlib>
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
}

bool isChar(const std::string &literal)
{
	if (literal.size() == 1 && isprint(literal[0]) && !isdigit(literal[0]))
		return true;
	return false;
}

bool isInt(const std::string& literal)
{
	char* term;
	long val = std::strtol(literal.c_str(), &term, 10);
	if(*term == '\0' && val <= INT_MAX && val >= INT_MIN)
		return true;
	return false;

}

bool isFloat(const std::string& literal)
{
	char* term;

	float val = std::strtof(literal.c_str(), &term);
	if (*term == 'f' && *(term + 1) == '\0')
		return true;
	return false;
}

bool isDouble(const std::string& literal)
{
	char* term;
	double val = std::strtod(literal.c_str(), &term);
	if(*term == '\0')
		return true;
	return false;

}
