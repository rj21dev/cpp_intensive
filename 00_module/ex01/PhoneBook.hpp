#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {

private:
	Contact	list[8];	
	int	index;
	int	size;

public:
	PhoneBook();
	~PhoneBook();
	void	addContact();
	void	startSearch();
};

#endif
