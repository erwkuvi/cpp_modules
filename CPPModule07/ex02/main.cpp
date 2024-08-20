#include <exception>
#include <iostream>
#include "Array.hpp"

int main(void)
{
	try
	{
		Array<int> a(4);
		//int a = 1;
		//int b = 42;


		//int a[4] = {1, 2, 3, 4};
		a[9] = 42;
		std::cout << "idx [2]: " << a[2] << std::endl;
		for(size_t i = 0; i < a.size(); i++)
		{
			a[i] = i * i * i;
			std::cout << "idx [" << i << "] " << a[i] << std::endl;
			//std::cout << p[2] << "\t" << p[-1] << 1[p] << (-1)[p] << '\n';
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
