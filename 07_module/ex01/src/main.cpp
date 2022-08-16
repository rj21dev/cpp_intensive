#include "../inc/iter.hpp"

// class Awesome
// {
// 	public:
// 		Awesome( void ) : _n( 42 ) { return; }
// 		int get( void ) const { return this->_n; }
// 	private:
// 		int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

int	main(void) {
	
	int			intArr[] = { 1, 3, 5, 7, 9 };
	double		doubleArr[] = { 0.1, 0.3, 0.5, 0.7, 0.9 };

	iter(intArr, sizeof(intArr) / sizeof(*intArr), onePrint);
	std::cout << std::endl;
	iter(doubleArr, sizeof(doubleArr) / sizeof(*doubleArr), onePrint);
	std::cout << std::endl;

	// {
	// 	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	// 	Awesome tab2[5];
	// 	iter( tab, 5, print );
	// 	iter( tab2, 5, print );
	// }

	return 0;
}