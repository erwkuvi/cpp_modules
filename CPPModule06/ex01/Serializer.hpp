#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <string>
#include "Data.hpp"

class Serializer 
{
private:
    Serializer(void);
    Serializer(const Serializer& instance);
    Serializer &operator=(const Serializer& rhs);

public:
    ~Serializer(void);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};


#endif // SERIALIZER_HPP
