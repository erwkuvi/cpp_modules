#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <stdexcept>
//#include <string>


	template<typename T> 
int easyfind(const T& a, int b)
{
	for (typename T::const_iterator it = a.begin(); it != a.end(); ++it)
	{
		if (*it == b)
			return b;
	}
	throw std::runtime_error("Error: no value found");
}
#endif // EASYFIND_HPP

