#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	iter(T* array, int length, void (*foo)(T const & elem)) {

	if (!array || !foo)
		return;
	for (int i = 0; i < length; i++)
		foo(array[i]);
}

template <typename T>
void	onePrint(T const & elem) {

	std::cout << elem << " ";
}

#endif