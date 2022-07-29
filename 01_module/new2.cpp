#include <iostream>
#include <string>

class	Student {

private:
	std::string _login;

public:
	Student() : _login("Default") {
		std::cout << "Student " << this->_login << " is born" << std::endl;
	}

	~Student() {
		std::cout << "Student " << this->_login << " died" << std::endl;
	}
};

int	main(void) {

	Student*	students = new Student[21];

	delete [] students; 
	return 0; 
}
