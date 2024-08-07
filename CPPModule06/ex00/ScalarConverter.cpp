#include "ScalarConverter.hpp"
#include <string>
#include <iostream>

ScalarConverter::ScalarConverter(void){}
ScalarConverter::ScalarConverter(const ScalarConverter& instance){(void)instance;}
ScalarConverter::~ScalarConverter(void){}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs)
{
	(void) rhs;
	return *this;
}

void ScalarConverter::convert( const std::string& literal)
{

	t_define arg;
	int type = arg.defineLiteral(literal);
	//std::cout << "type" << type << std::endl;

	switch (type) {
		case (CHAR):
			arg.printChar(literal);
			break;
		case (INT):
			arg.printInt(literal);
			break;
		case (FLOAT):
			arg.printFloat(literal);
			break;
		//case (DOUBLE):
		//	printDouble(literal);
		default:
			std::cerr << "Error: No valid argument" << std::endl;
			break;
	}

}
