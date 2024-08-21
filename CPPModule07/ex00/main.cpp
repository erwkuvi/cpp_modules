#include <iostream>
#include <string>
#include "whatever.hpp"

int main(void)
{
	int z = 1;
	int y = 1;
	int &x = max(z, y);

	//swap(a, b);
	std::cout << "max" << std::endl;

	std::cout << "z: " << &z << " y: " << &y << std::endl;
	std::cout << "x: " << &x << std::endl;

	std::cout << "\nstrings" << std::endl;

	std::string f = "Hello";
	std::string g = "Hellp";
	std::string &j = max(f, g);
	std::cout << "min(f,g): " << min(f, g) << std::endl;

	std::cout << "f: " << f << " g: " << g << std::endl;
	std::cout << "&j = max(f, g) | j = " << j << std::endl;
	std::cout << "\nswap" << std::endl;
	swap(f, g);

	std::cout << "f: " << f << " g: " << g << std::endl;
	std::cout << "\nmin(f, g)" << std::endl;
	std::cout << min(f, g) << std::endl;


	std::cout << "\nTest input" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}
