#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <string>

template<typename T>
class Array 
{
	private:
		// Add your private members here

	public:
		Array(unsigned int n); // Creates an array of n elements initialized by default.

		Array(void);//creates an empty array
		Array(const Array& instance);
		Array &operator=(const Array& rhs);
		~Array(void);



};

#endif // ARRAY_HPP
