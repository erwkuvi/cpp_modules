#ifndef ITER_HPP
#define ITER_HPP

	template<typename T>
void iter(T* arr, int n, void(*func)(T&))
{
	for(int i = 0; i < n; i++)
		func(arr[i]);
}

#endif // ITER_HPP
