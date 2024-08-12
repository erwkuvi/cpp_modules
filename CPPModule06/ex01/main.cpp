#include <cstdint>
#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

//int main(int argc, char **argv)
int main(void)
{

	Data pData;

	pData.id = 42;
	pData.name = "Francisco Fernando Gonzalez de la Fuente";
	pData.value = 4.2f;
	pData.c = '@';

	std::cout << "pData id: " << pData.name << std::endl;
	std::cout << "pData id: " << &pData << std::endl;
	uintptr_t raw = Serializer::serialize(&pData);

	std::cout << "raw: " << raw << std::endl;
	Data* mdfPtr = Serializer::deserialize(raw);

	std::cout << "mdfPtr id: " << (*mdfPtr).name << std::endl;
	std::cout << "mdfPtr id: " << mdfPtr << std::endl;
	if (&pData == mdfPtr)
		std::cout << "Success" << std::endl;
	else
		std::cout << "pointers not pointing to the same memory address" << std::endl;

	std::cout << "\n New Test" << std::endl;

	Data pData2;

	pData2.id = 42;
	pData2.name = "Maria Consuelo Concepcion Martinez de la Oca";
	pData2.value = 4.2f;
	pData2.c = '@';

	std::cout << "pData2 id: " << pData2.name << std::endl;
	std::cout << "pData2 id: \t" << &pData2 << std::endl;
	uintptr_t raw2 = Serializer::serialize(&pData2);
	std::cout << "Before raw2: \t" << raw2 << std::endl;
	raw2 += 1;
	std::cout << "After raw2: \t" << raw2 << std::endl;
	Data* mdfPtr2 = Serializer::deserialize(raw2);

	std::cout << "mdfPtr2 id: \t" << mdfPtr2 << std::endl;
	if (&pData2 == mdfPtr2)
		std::cout << "Success" << std::endl;
	else
		std::cout << "Pointers not pointing at the same memory address" << std::endl;

}
