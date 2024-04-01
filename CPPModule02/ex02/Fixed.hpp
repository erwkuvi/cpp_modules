#ifndef FIXED_HPP

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
		bool operator>(const Fixed &rhs) const;
		bool operator<(const Fixed &rhs) const;
		bool operator==(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		Fixed &operator+(const Fixed &rhs);
		Fixed &operator-(const Fixed &rhs);
		Fixed &operator*(const Fixed &rhs);
		Fixed &operator/(const Fixed &rhs);
		Fixed &operator++();
		Fixed operator++(int dummy);

  ~Fixed(void);

	static int &min(int &fixedp1, int &fixedp2);
	static int &min(const int &fixedp1, const int &fixedp2);
	static int &max(int &fixedp1, int &fixedp2);
	static int &max(const int &fixedp1, const int &fixedp2);


  int getRawBits(void) const;
  void setRawBits(int const raw);
	float toFloat(void) const;


	int toInt(void) const;
};

#endif
