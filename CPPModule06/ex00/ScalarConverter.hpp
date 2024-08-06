#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <string>
#include "DefineVar.hpp"

class ScalarConverter 
{
private:
	ScalarConverter(void);
	ScalarConverter(const ScalarConverter& instance);
	~ScalarConverter(void);

	ScalarConverter& operator=(const ScalarConverter& rhs);
public:
	static void convert( const std::string& literal);

};

#endif // SCALARCONVERTER_HPP 
