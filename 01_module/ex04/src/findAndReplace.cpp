#include "../inc/sedIsForLoosers.hpp"

std::string	findAndReplace(std::string src, std::string find, std::string repl) {

	std::string	dest = src;
	size_t	i = 0;
	while (true) {
		i = dest.find(find, i);
		if (i == std::string::npos)
			break;
		dest.erase(i, find.length());
		dest.insert(i, repl);
		i += repl.length();
	}
	return dest;
}