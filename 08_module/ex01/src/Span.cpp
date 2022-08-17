#include "../inc/Span.hpp"

Span::Span() {

	N = 0;
	vec.reserve(0);
}

Span::Span(unsigned int n) {

	N = n;
	vec.reserve(n);
}

Span::Span(Span const & src) {

	*this = src;
}

Span&	Span::operator=(Span const & assign) {

	if (this == &assign)
		return *this;
	N = assign.N;
	vec = assign.vec;
	return *this;
}

Span::~Span() {}

void	Span::addNumber(int num) {

	if (vec.size() == vec.capacity())
		throw NoSpaceException();
	vec.push_back(num);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end) {

	while (start < end) {
		if (vec.size() == vec.capacity())
			throw NoSpaceException();
		vec.push_back(*start);
		++start;
	}
}

int	Span::shortestSpan() {
	
	if (vec.size() <= 1)
		throw NoSpanException();
	std::vector<int> tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	int dist = *(tmp.begin() + 1) - *tmp.begin();
	std::vector<int>::iterator it = tmp.begin();
	for (; it != tmp.end() - 1; ++it)
		dist = *(it + 1) - *it < dist ? *(it + 1) - *it : dist;
	return dist;
}

int Span::longestSpan() {

	if (vec.size() <= 1)
		throw NoSpanException();
	std::vector<int> tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	return *(tmp.end() - 1) - *tmp.begin();
}

const char* Span::NoSpaceException::what() const throw() {
	
	return "All elements is stored";
}

const char* Span::NoSpanException::what() const throw() {
	
	return "No span can be found";
}