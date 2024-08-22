#include "easyfind.hpp"
#include <exception>
#include <vector>
#include <list>
#include <iostream>

int main(int argc, char** argv)
{
		(void) argc;
		try
		{
			int b;
			b = 2;
			if(argv[1])
				b = std::stoi(argv[1]);
			std::list<int> delusional = {9, 2, 8, 42, 21, 24};
			//std::vector<int> delusional = {9, 2, 8, 42, 21, 24};

			int res;
			res = easyfind(delusional, b);
			std::cout << "res: " << res << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}

		try
		{
			int b;
			b = 21;
			if(argv[1])
				b = std::stoi(argv[1]);
			std::vector<int> delusional = {9, 2, 8, 42, 21, 24};

			int res = easyfind(delusional, b);
			std::cout << "vector: " << res << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}

}
