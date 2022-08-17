#include "../inc/Span.hpp"

static void	log_separator(std::string text = "*") {

	std::string border = "";
	for (int i = 0; i < 84 / 2 - (int)text.length(); i++)
		border += "*";
	std::cout << std:: endl << border << " " << text << " " << border << "*\n" << std::endl;
}

int main(void) {

	log_separator("TEST 1 (Exceptions)");
	{
		Span test;

		try {
			test.addNumber(42);
		}
		catch(std::exception & e) { std::cerr << e.what() << std::endl; }
		try {
			test.shortestSpan();
		}
		catch(std::exception & e) { std::cerr << e.what() << std::endl; }
		try {
			test.longestSpan();
		}
		catch(std::exception & e) { std::cerr << e.what() << std::endl; }
	}
	log_separator("TEST 2 (mini)");
	{
		Span test(5);
		try {
			test.addNumber(6);
			test.addNumber(3);
			test.addNumber(17);
			test.addNumber(9);
			test.addNumber(11);
		}
		catch(std::exception & e) { std::cerr << e.what() << std::endl; }
		try	{
			std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
		}
		catch(std::exception & e) { std::cerr << e.what() << std::endl; }
		try	{
			std::cout << "Longest span: " << test.longestSpan() << std::endl;
		}
		catch(std::exception & e) { std::cerr << e.what() << std::endl; }
	}
	log_separator("TEST 3 (Big Data)");
	{
		Span test(10000);
		srand(time(NULL));
		std::vector<int> arr;
		for (int i = 0; i < 10000; ++i)
			arr.push_back(rand());
		try	{
			test.addNumber(arr.begin(), arr.end());
		}
		catch(std::exception & e) { std::cerr << e.what() << std::endl; }
		try	{
			std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
		}
		catch(std::exception & e) { std::cerr << e.what() << std::endl; }
		try	{
			std::cout << "Longest span: " << test.longestSpan() << std::endl;
		}
		catch(std::exception & e) { std::cerr << e.what() << std::endl; }
	}

	return 0;
}