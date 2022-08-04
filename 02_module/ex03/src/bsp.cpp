#include "../inc/Point.hpp"

static Fixed	checkPoint(Point const point, Point const a, Point const b) {

	return (point.getX() - b.getX()) * (a.getY() - b.getY()) - (a.getX() - b.getX()) * (point.getY() - b.getY());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {

	Fixed chk1 = checkPoint(point, a, b);
	Fixed chk2 = checkPoint(point, b, c);
	Fixed chk3 = checkPoint(point, c, a);

	bool negative = chk1 <= 0 && chk2 <= 0 && chk2 <= 0;
	bool positive = chk1 >= 0 && chk2 >= 0 && chk2 >= 0;

	return negative || positive;
}