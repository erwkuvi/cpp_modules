#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
  int _fixedPoint;
  static const int _nFractBits = 8;

public:
  Fixed(void);
  Fixed(const Fixed &intance);
  Fixed &operator=(const Fixed &rhs);
  ~Fixed(void);

  int getRawBits(void) const;
  void setRawBits(int const raw);
};

#endif
