#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

class NotFindException : public std::exception {

	public:
		virtual const char* what() const throw() { return "Element with this value not found"; }
};

template <typename T>
typename T::iterator	easyfind(T & src, int toFind) {

	typename T::iterator it = std::find(src.begin(), src.end(), toFind);
	if (it == src.end())
		throw NotFindException();
	return it;
}

template <typename T>
void	print_container(T & container) {

	for (typename T::iterator i = container.begin(); i != container.end(); ++i)
		std::cout << *i << " ";
	std::cout << std::endl;
}

#endif