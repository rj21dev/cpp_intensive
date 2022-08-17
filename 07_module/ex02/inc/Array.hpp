#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {

	private:

		T*				arr;
		unsigned int	n;

	public:

		Array();
		Array(unsigned int _size);
		Array(Array const & src);
		~Array();

		Array&			operator=(Array const & assign);
		T&				operator[](unsigned int index);
		T const			operator[](unsigned int index) const;

		unsigned int	size() const;

		class RangeException : public std::exception {

			public:
				virtual const char* what() const throw();
		};
};

#include "Array.tpp"

#endif
