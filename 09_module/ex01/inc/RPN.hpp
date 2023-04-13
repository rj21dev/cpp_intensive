#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <list>
#include <iostream>
#include <limits.h>

class RPN {

private:
	std::list<long long int> _res;

public:
	RPN();
	RPN(RPN&);
	~RPN();
	RPN& operator=(RPN const &src);
	std::list<long long int>	getRes(void) const;
	int							setRes(std::string arg);
	void						printRes(void);
};

std::ostream &	operator<<(std::ostream & o, RPN const & i);

#endif