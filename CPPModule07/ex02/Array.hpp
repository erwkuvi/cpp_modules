#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <string>

template<typename T>
class Array 
{
	private:
		// Add your private members here

	public:
		//Array(const std::string& arg); // In case you need to pass an  argument
		//Orthodox canonical begin
		Array(void);
		Array(const Array& instance);
		Array &operator=(const Array& rhs);
		~Array(void);
		//Orthodox canonical end

		// Add your class members and methods here
};

#endif // ARRAY_HPP
