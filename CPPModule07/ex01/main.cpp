#include <iostream>
#include "iter.hpp"

int main(void)
{

	//int a = 1;
	//int b = 42;

	int arr[5] {1, 2, 55, 6 ,7};

	iter(arr, 5, print<int>);
	iter(arr, 5, addOne);
	std::cout << "\n"<< std::endl;
	iter(arr, 5, print);
	
	std::cout << "\n"<< std::endl;

	std::string arr1[5] {"Hello", "Hallo", "Hola", "Hella", "Alo"};

	iter(arr1, 5, print<std::string>);
	iter(arr1, 5, removeLast<std::string>);
	std::cout << "\n"<< std::endl;
	iter(arr1, 5, print);
	iter(arr1, 5, removeFirst<std::string>);
	std::cout << "\n"<< std::endl;
	iter(arr1, 5, print);


	std::cout << "\n"<< std::endl;
	float arr3[5] {1.2f, 10.2f, 0.44444f, 1.4f, 4.2f};
	iter(arr3, 5, print);
	std::cout << "\n"<< std::endl;
	iter(arr3, 5, addOne);
	iter(arr3, 5, print);
}
