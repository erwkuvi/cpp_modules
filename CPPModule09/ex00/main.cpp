#include "BitcoinExchange.hpp"
#include <cstdio>
#include <map>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>

int main(int argc, char** argv)
{
	try
	{
		if (argc != 2)
			throw std::runtime_error("Error: ./btc \"validInfile\"");

		std::string infile(argv[1]);
		BitcoinExchange a(infile);
		a.outputvalue();

		//std::string test("2009-01-08,0");
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


}
//std::map<std::string, float> data;
//data["first"] = 1;
//data["second"] = 2;
//data["third"] = 3;
//data["fourth"] = 4;
//std::cout << data["third"] << "\n" << std::endl;
