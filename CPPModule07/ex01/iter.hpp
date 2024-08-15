#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

	template<typename T>
void iter(T* arr, int n, void(*func)(T&))
{
	for(int i = 0; i < n; i++)
		func(arr[i]);
}

	template<typename T>
void print(T& a)
{
	std::cout << "Value: " << a << std::endl;
}

template<typename T>
void removeLast(T& a)
{
	//std::string tmp(a);
	if (a.empty())
		return;
	a.erase(a.length() - 1);
}


template<typename T>
void removeFirst(T& a)
{
	if (a.empty())
		return;
	std::string tmp(a);
	a = tmp.substr(1, a.length() - 1);
}

template<typename T>
void addOne(T& a)
{
	a += 1.9;
}



#endif // ITER_HPP
