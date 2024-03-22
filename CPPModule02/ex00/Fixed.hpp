#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int _fixed;
	static const int _nFractBits;
	
public:
	Fixed(int n);
	Fixed (const Fixed& intance);
	Fixed& operator= (const Fixed);
	~Fixed(void);
};

#endif // !FIXED_HPP
