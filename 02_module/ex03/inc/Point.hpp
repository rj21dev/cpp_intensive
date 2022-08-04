#ifndef POINT_HPP
#define POINT_HPP

#include "../inc/Fixed.hpp"

class Point
{

	private:
	
		Fixed const	_x;
		Fixed const	_y;

	public:

		Point();
		Point(const Fixed x, const Fixed y);
		Point(const Point& copyFrom);
		~Point();

		Point&	operator=(Point & rightSide);

		Fixed const	getX(void) const;
		Fixed const	getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const Point);

#endif