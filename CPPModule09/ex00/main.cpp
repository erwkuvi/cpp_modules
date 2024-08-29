#include "BitcoinExchange.hpp"
#include <cstdio>
#include <map>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv)
{
	try
	{
		(void)argc;
		char* end = NULL;
		float inValue = std::strtof(argv[1], &end);

		//BitcoinExchange a("data.csv", inValue);
		std::map<std::string, float> data;
		data["first"] = 1;
		data["second"] = 2;
		data["third"] = 3;
		data["fourth"] = 4;



		std::cout << data["third"] << "\n" << inValue << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


}
