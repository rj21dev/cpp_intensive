#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span {

	private:

		std::vector<int>	vec;
		unsigned int		N;

	public:

		Span();
		Span(unsigned int n);
		Span(Span const & src);
		Span& operator=(Span const & assign);
		~Span();

		void	addNumber(int num);
		void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();

		class NoSpaceException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
		class NoSpanException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

#endif