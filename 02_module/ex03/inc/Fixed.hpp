#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:

		int					rawBits;
		static const int	fractionalBits = 8;

	public:

		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& copyFrom);
		~Fixed();

		Fixed&	operator=(Fixed const & rightSide);

		bool	operator>(Fixed const & rightSide) const;
		bool	operator<(Fixed const & rightSide) const;
		bool	operator>=(Fixed const & rightSide) const;
		bool	operator<=(Fixed const & rightSide) const;
		bool	operator==(Fixed const & rightSide) const;
		bool	operator!=(Fixed const & rightSide) const;

		Fixed	operator+(Fixed const & rightSide) const;
		Fixed	operator-(Fixed const & rightSide) const;
		Fixed	operator*(Fixed const & rightSide) const;
		Fixed	operator/(Fixed const & rightSide) const;

		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed& 			min(Fixed& a, Fixed& b);
		static Fixed& 			max(Fixed& a, Fixed& b);
		static Fixed const &	min(Fixed const & a, Fixed const & b);
		static Fixed const &	max(Fixed const & a, Fixed const & b);
};

std::ostream&	operator<<(std::ostream & out, Fixed const & rightSide);

#endif