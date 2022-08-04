#include "../inc/Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y) {}

Point::Point(const Point& copyFrom) : _x(copyFrom.getX()), _y(copyFrom.getY()) {}

Point::~Point() {}

Point&	Point::operator=(Point & rightSide) {
	
	return rightSide;
}

Fixed const	Point::getX(void) const {

	return _x;
}

Fixed const	Point::getY(void) const {

	return _y;
}