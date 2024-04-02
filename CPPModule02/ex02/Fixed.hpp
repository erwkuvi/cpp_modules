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
		bool operator>(const Fixed &rhs) const;
		bool operator<(const Fixed &rhs) const;
		bool operator==(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		Fixed operator+(const Fixed &rhs)const;
		Fixed operator-(const Fixed &rhs)const;
		Fixed operator*(const Fixed &rhs)const;
		Fixed operator/(const Fixed &rhs)const;
		Fixed &operator++();
		Fixed operator++(int dummy);

		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		static Fixed &min(Fixed &fixedp1, Fixed &fixedp2);
		static const Fixed &min(const Fixed &fixedp1, const Fixed &fixedp2);
		static Fixed &max(Fixed &fixedp1, Fixed &fixedp2);
		static const Fixed &max(const Fixed &fixedp1, const Fixed &fixedp2);
};

std::ostream& operator<<(std::ostream& output, const Fixed& other);
#endif
