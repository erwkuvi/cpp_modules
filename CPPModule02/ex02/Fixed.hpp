#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
  int _fixedPoint;
  static const int _nFractBits = 8;

public:
  Fixed(void);
  Fixed(const int n);
  Fixed(const float n);
  Fixed(const Fixed &intance);
  Fixed &operator=(const Fixed &rhs);
  ~Fixed(void);

  int getRawBits(void) const;
  void setRawBits(int const raw);
	float toFloat(void) const;


	int toInt(void) const;
};

 std::ostream& operator<< (std::ostream& output, const Fixed& other);

#endif
