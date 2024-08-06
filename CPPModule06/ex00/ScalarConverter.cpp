#include "ScalarConverter.hpp"
#include <string>
//#include <ostream>

ScalarConverter::ScalarConverter(void){}
ScalarConverter::ScalarConverter(const ScalarConverter& instance){}
ScalarConverter::~ScalarConverter(void){}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs)
{
	(void) rhs;
	return *this;
}

void ScalarConverter::convert( const std::string& literal)
{

	Definer a;
	int type = a.defineLiteral(literal);

	switch (type) {
		default:

			break;
	}

}

