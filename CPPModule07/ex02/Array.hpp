#ifndef ARRAY_HPP
#define ARRAY_HPP
//#include <string>
#include <exception>
#include <stdexcept>

template<typename T>
class Array 
{
	private:
		T *array;
		unsigned int arr_size;
		// Add your private members here

	public:
		Array(unsigned int n) : arr_size(n) 
		{
			array = new T[n];
		} // Creates an array of n elements initialized by default.

		Array() : array(0), arr_size(0) {} //creates an empty array
		Array(const Array& instance);
		Array &operator=(const Array& rhs)
		{
			fort
			array
		}
		~Array(void)
		{
			if(array)
				delete[] array;
		}

		T& operator[](unsigned int idx)
		{
			if(idx < arr_size)
				return array[idx];
			else
				throw std::out_of_range("Error: Out of bounds");
		}
		unsigned int size() const {return arr_size;}

};

#endif // ARRAY_HPP
