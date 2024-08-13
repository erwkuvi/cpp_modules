#ifndef DERIVED_HPP
#define DERIVED_HPP
#include <string>
#include "Base.hpp"

class A : public Base
{
private:

public:
    A(void);
   virtual ~A(void);
};

class B : public Base
{
private:

public:
    B(void);
    ~B(void);
};

class C : public Base
{
private:

public:
    C(void);
    ~C(void);
};

#endif 
