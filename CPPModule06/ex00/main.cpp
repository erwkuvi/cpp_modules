#include <iostream>
//#include "DefineVar.hpp"

int main ()
{
	char* term;

	float val = std::strtod("NaN", &term);
	std::cout << "term: " << *term << std::endl;
	std::cout << "val: " << val << std::endl;

	//ScalarConverter converter;

	//converter.convert();
	int i = 21;
	double d = 2.222222222222222222222222222;
	char c = 'c';
	float f = 2.222222222222222222222222222f;
	std::cout << "int: " << i << "\tdouble: " << d << "\t char: " << c << "\tfloat: " << f << std::endl;

}
