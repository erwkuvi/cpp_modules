#ifndef BASE_HPP
#define BASE_HPP
#include <string>

class Base 
{
private:
    // Add your private members here

public:
    //Base(const std::string& arg); // In case you need to pass an  argument
//Orthodox canonical begin
    Base(void);
    Base(const Base& instance);
    Base &operator=(const Base& rhs);
    ~Base(void);
//Orthodox canonical end

    // Add your class members and methods here
};

std::ostream& operator<<(std::ostream& output, const Base& instance);

#endif // BASE_HPP
