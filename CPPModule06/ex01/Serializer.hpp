#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <string>

class Serializer 
{
private:
    Serializer(void);

public:
    Serializer(const Serializer& instance);
    Serializer &operator=(const Serializer& rhs);
    ~Serializer(void);

		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
};

std::ostream& operator<<(std::ostream& output, const Serializer& instance);

#endif // SERIALIZER_HPP
