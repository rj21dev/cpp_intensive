#include "../inc/RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN& copy) {
	*this = copy;
}

RPN& RPN::operator=( RPN  const &src) {

	if (this == &src)
		return (*this);
	_res = src.getRes();
	return (*this);
}

std::list<long long int>	RPN::getRes() const {
	return (_res);
}

int	RPN::setRes(std::string arg) {

	size_t 								pos;
	long long int						on;
	std::list<long long int>::iterator	it;
	std::list<long long int>::iterator	it2;

	pos = arg.find_first_not_of(" ");
	if (pos == std::string::npos || isdigit(arg[pos]) == 0) {
		std::cerr << "Error" << std::endl;
		return (1);
	}
	_res.push_back(arg[pos] - 48);
	pos++;
	while (pos != std::string::npos && arg[pos] != 0) {
		pos = arg.find_first_not_of(" ", pos);
		if (pos == std::string::npos)
			return (0);
		if (arg[pos] == '+' || arg[pos] == '-' || arg[pos] == '/' || arg[pos] == '*') {
			if (_res.size() < 2) {
				std::cerr << "Error" << std::endl;
				return (1);
			}
			it = _res.end();
			it2 = _res.end();
			it--;
			it2--;
			it2--;
			if (arg[pos] == '+')
				on = *it + *it2;
			if (arg[pos] == '-')
				on = *it2 - *it;
			if (arg[pos] == '*')
				on = *it * *it2;
			if (arg[pos] == '/') {
				if (*it == 0) {
					std::cerr << "Error" << std::endl;
					return (1);
				}	
				on = *it2 / *it;
			}
			_res.pop_back();
			_res.pop_back();
			_res.push_back(on);

		} else {
			_res.push_back(arg[pos] - 48);
		}
		it = _res.end();
		it--;
		if (*it > INT_MAX || *it < INT_MIN) {
			std::cerr << "Overflow reached." << std::endl;
			return (1);
		}
		pos++;
	}
	return (0);
}
	
void RPN::printRes(void) {

	std::list<long long int>::iterator it;

	it = _res.begin();
	while (it != _res.end()) {
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}