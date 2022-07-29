#include <iostream>
#include <fstream>

int	main(void) {

	std::ifstream	ifs("11");
	std::string		buf;
	std::string		buf2;
	ifs >> buf >> buf2;

	std::cout << buf << " " << buf2 << std::endl;
	ifs.close();

	std::ofstream	ofs("test.out");
	ofs << "test filestreams" << std::endl;
	ofs.close();
	return 0;
}