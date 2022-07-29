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

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple"
				"-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::info(void) {
	
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn't be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void) {
	
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void) {
	
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;

}

void	Harl::complain(std::string level) {

	int	i;
	for (i = 0; i < 4; i++)
		if (level.compare(this->levels[i]) == 0)
			break;
	switch (i) {
		case 0:
			(this->*funcArr[0])();
			__attribute__ ((fallthrough));
		case 1:
			(this->*funcArr[1])();
			__attribute__ ((fallthrough));
		case 2:
			(this->*funcArr[2])();
			__attribute__ ((fallthrough));
		case 3:
			(this->*funcArr[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}