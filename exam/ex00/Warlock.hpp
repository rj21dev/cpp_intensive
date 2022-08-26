#pragma once

#include <iostream>
#include <string>

class Warlock {

private:
	
	std::string	name;
	std::string	title;

	Warlock();
	Warlock(Warlock const & src);
	Warlock& operator=(Warlock const & assign);

public:

	Warlock(std::string const & _name, std::string const & _title);
	~Warlock();
	std::string	const &	getName() const;
	std::string	const &	getTitle() const;
	void				setTitle(std::string const & _title);
	void				introduce() const;
};