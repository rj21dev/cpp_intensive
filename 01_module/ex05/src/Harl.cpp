#include "../inc/Harl.hpp"
		
Harl::Harl() {
	
	funcArr[0] = &Harl::debug;
	funcArr[1] = &Harl::info;
	funcArr[2] = &Harl::warning;
	funcArr[3] = &Harl::error;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}

Harl::~Harl() {}

void	Harl::debug(void) {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple"
				"-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put "
				"enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for "
				"years whereas you started working here since last month." 	<< std::endl;
}

void	Harl::error(void) {
	
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {

	for (int i = 0; i < 4; i++)
		if (level.compare(this->levels[i]) == 0) {
			(this->*funcArr[i])();
			return;
		}
	std::cout << "Wrong command." << std::endl;
}