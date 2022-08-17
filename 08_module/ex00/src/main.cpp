#include "../inc/easyfind.hpp"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <list>

int	main(void) {

	srand(time(NULL));

	{
		std::vector<int> vec;
		for (int i = 0; i < 10; ++i)
			vec.push_back(rand() % 10 + 20);

		print_container(vec);
		try {
			std::vector<int>::iterator i = easyfind(vec, 25);
			for (; i != vec.end(); ++i)
				std::cout << *i << " ";
			std::cout << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}	
	}
	std::cout << std::endl;
	{
		std::list<int> lst;
		for (int i = 0; i < 10; ++i)
			lst.push_back(rand() % 10 + 20);

		print_container(lst);
		try {
			std::list<int>::iterator i = easyfind(lst, 25);
			for (; i != lst.end(); ++i)
					std::cout << *i << " ";
			std::cout << std::endl;
		}
		catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}	
	}

	return 0;
}