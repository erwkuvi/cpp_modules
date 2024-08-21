#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
//#include <string>
#include <exception>
#include <stdexcept>
#define RESET	"\033[0m"
#define YELLOW	"\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define RED     "\033[31m"

template<typename T>
class Array 
{
	private:
		T *_array;
		unsigned int _arr_size;
		// Add your private members here

	public:
		Array(unsigned int n) : _arr_size(n) 
	{
		_array = new T[n];
	} // Creates an array of n elements initialized by default.

		Array() : _array(0), _arr_size(0) {} //creates an empty array

		Array(const Array& instance)
		{ 
			if(instance.size() > 0)
			{
				_arr_size = instance.size();
				_array = new T[_arr_size];

				for(unsigned int i = 0; i < _arr_size; i++)
					_array[i] = instance._array[i];
			}
			else
			{
				_array = NULL;
				_arr_size = 0;
			}
		}

		Array &operator=(const Array& rhs)
		{
			if(this != &rhs)
			{
				if(_arr_size > 0 && _array)
				{
					delete[] _array;
					_array = NULL;
				}
				if(rhs.size() > 0)
				{
					_arr_size = rhs.size();
					_array = new T[_arr_size];

					for(unsigned int i = 0; i < _arr_size; i++)
						_array[i] = rhs._array[i];
				}
				else
				{
					_array = NULL;
					_arr_size = 0;
				}
			}
			return *this;
		}

		~Array(void)
		{
			if(_arr_size)
				delete[] _array;
		}

		T& operator[](unsigned int idx)
		{
			if(idx < _arr_size)
				return _array[idx];
			else
			{
				//std::cout << "this: " << idx << std::endl;
				throw std::out_of_range("Error: Out of bounds");
			}
		}

		unsigned int size() const {return _arr_size;}
};

#endif // ARRAY_HPP
