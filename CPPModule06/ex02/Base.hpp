#ifndef BASE_HPP
#define BASE_HPP
#define RESET	"\033[0m"
#define YELLOW	"\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define RED     "\033[31m"


//class A;
//class B;
//class C;
class Base 
{
private:


public:
    Base(void);
    virtual ~Base(void);

		Base* generate(void);
		void identify(Base* p);
		void identify(Base& p);
};


#endif // BASE_HPP
