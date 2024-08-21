#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
				std::cout << "numbers[-2]" << std::endl;
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
				std::cout << "numbers[MAX_VAL] = 0;" << std::endl;
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

//int main(void)
//{
//	try
//	{
//		Array<int> a(4);
//		Array<int> d;
//		//int a = 1;
//		//int b = 42;
//
//
//		//int a[4] = {1, 2, 3, 4};
//		const int value = 42;
//		a[1] = value;
//		std::cout << "a idx [1]: " << a[1] << std::endl;
//		for(size_t i = 0; i < a.size(); i++)
//		{
//			a[i] = i * i * i;
//			std::cout << YELLOW << "a idx [" << i << "] " << a[i] << RESET << std::endl;
//			//std::cout << p[2] << "\t" << p[-1] << 1[p] << (-1)[p] << '\n';
//		}
//		std::cout << "\n"<< std::endl;
//		Array<int> b = a;
//		std::cout << MAGENTA << "b idx [3]: " << b[3] << RESET << std::endl;
//		std::cout << "\n"<< std::endl;
//		Array<int> c(a);
//		std::cout << RED << "c idx [3]: " << c[3] << RESET << std::endl;
//		c[3] = 102;
//		std::cout << RED << "c idx [3]: " << c[3] << RESET << std::endl;
//
//		std::cout << RED << "b = c" << RESET << std::endl;
//		b = c;
//		std::cout << RED << "b idx [3]: " << b[3] << RESET << std::endl;
//		//b = d;
//		std::cout << RED << "b idx [0]: " << b[0] << RESET << std::endl;
//	}
//	catch (std::exception &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	std::cout << "\nStrings \n" << std::endl;
//
//	try
//	{
//		Array<std::string> str1;
//		Array<std::string> str2(5);
//		Array<std::string> str3(2);
//		str1 = str2;
//		str1[0] = "test";
//		str3[0] = "test str3";
//		std::cout << "str1 idx [0]: " << str1[0] << std::endl;
//		std::cout << "str1 size : " << str1.size() << std::endl;
//		str1 = str3;
//		std::cout << "str1 idx [0]: " << str1[0] << std::endl;
//		// std::cout << "str1 idx [2]: " << str1[1] << std::endl;
//		// std::cout << "str1 size : " << str1.size() << std::endl;
//		Array<int> *e = new Array<int>(5);
//		(*e)[1] = 24;
//		std::cout << "*e size:\t" << e->size() << "\t(*e)[1]: " << "\t" << (*e)[1] << std::endl;
//		delete e;
//		e = NULL;
//
//		//int * a = new int();
//		//std::cout << "*a " << *a << std::endl;
//	}
//	catch(std::exception &e)
//	{
//		std::cout << e.what() << std::endl;
//
//	}
//}
