#include <cstdint>
#include <iostream>

int main(int argc, char **argv)
{
	int *ptr = new int(42);

	std::cout << "int: " << *ptr << std::endl;
	uintptr_t newPtr = reinterpret_cast<uintptr_t>(ptr);

	newPtr += 16;
	std::cout << "newPtr: " << newPtr << std::endl;
	int *mdfPtr = reinterpret_cast<int*>(newPtr);



}
