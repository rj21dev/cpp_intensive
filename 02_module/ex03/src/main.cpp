#include <iostream>
#include "../inc/Point.hpp"

int	main(void) {

	std::cout << "****** TEST 1 ******" << std::endl;
	{
		Point a(-3.2f, -5.34f);
		Point b(0, 10.f);
		Point c(15, -7.35f);
		Point point(0, 0);

		if (bsp(a, b, c, point))
			std::cout << "point IN triangle" << std::endl;
		else
			std::cout << "point OUT of triangle" << std::endl;
	}
	
	std::cout << "****** TEST 2 ******" << std::endl;
	{
		Point a(-3.2f, -5.34f);
		Point b(0, 10.f);
		Point c(15, -7.35f);
		Point point(-7, -5);

		if (bsp(a, b, c, point))
			std::cout << "point IN triangle" << std::endl;
		else
			std::cout << "point OUT of triangle" << std::endl;
	}

	std::cout << "****** TEST 3 ******" << std::endl;
	{
		Point a(-3.2f, -5.34f);
		Point b(0, 10.f);
		Point c(15, -7.35f);
		Point point(10, 1);

		if (bsp(a, b, c, point))
			std::cout << "point IN triangle" << std::endl;
		else
			std::cout << "point OUT of triangle" << std::endl;
	}

	std::cout << "****** TEST 4 ******" << std::endl;
	{
		Point a(-3.2f, -5.34f);
		Point b(0, 10.f);
		Point c(15, -7.35f);
		Point point(0, 10);

		if (bsp(a, b, c, point))
			std::cout << "point IN triangle" << std::endl;
		else
			std::cout << "point OUT triangle" << std::endl;
	}

	return (0);
}