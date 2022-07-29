#include <iostream>
#include <string>

class Student {
	private:
		std::string	_login;

	public:
		Student(std::string const & login) : _login(login) {}
		~Student() {}

		std::string& getLoginRef() {

			return this->_login;
		}

		std::string const & getLoginRefConst() const {

			return this->_login;
		}

		std::string* getLoginPtr() {

			return &(this->_login);
		}

		std::string const * getLoginPtrConst() const {

			return &(this->_login);
		}
};

int	main(void) {

	Student			bob = Student("Bobulea");
	Student const	jim = Student("Jimulea");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "BobBobBob";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "BobbyBob";
	std::cout << bob.getLoginRefConst() << std::endl;
	return 0;
}