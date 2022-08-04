#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:

		int					rawBits;
		static const int	fractionalBits = 8;

	public:

		Fixed();
		~Fixed();
		Fixed(const Fixed& copyFrom);
		Fixed&	operator=(Fixed const & rightSide);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif