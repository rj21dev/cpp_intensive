#include "../inc/sedIsForLoosers.hpp"

int	main(int argc, char **argv) {

	if (argc != 4) {
		std::cout << "Usage: <input.filename> <str.find> <str.replace>" << std::endl;
		return 1;
	}

	std::string	filename = argv[1];
	std::ifstream	ifs(filename);
	if (!ifs.is_open()) {
		std::cout << "Error: Input file doesn't open or doesn't exist." << std::endl;
		return 1;
	}
	
	std::ofstream	ofs(filename + ".replace");
	if (!ofs.is_open()) {
		std::cout << "Error: Output file." << std::endl;
		return 1;
	}

	std::string	str;
	while (ifs.good())
	{
		getline(ifs, str);
		ofs << findAndReplace(str, argv[2], argv[3]) << std::endl;
	}
	
	ofs.close();
	ifs.close();
	return 0;
}