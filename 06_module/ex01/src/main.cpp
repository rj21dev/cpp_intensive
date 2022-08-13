#include "../inc/Data.hpp"

uintptr_t	serialize(Data* ptr) {

	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw) {

	return reinterpret_cast<Data *>(raw);
}

int	main(void) {

	Data	data = { 3.14, 42, "lol"};
	Data*	dataPtr = &data;

	std::cout << "data values :" << data.a << " " << data.b << " " << data.str << std::endl;

	uintptr_t raw = serialize(dataPtr);

	std::cout << "raw bits: " << raw << std::endl;

	Data*	newData = deserialize(raw);
	
	std::cout << "data address: " << dataPtr << std::endl;
	std::cout << "newData address: " << newData << std::endl;
	std::cout << "newData values :" << newData->a << " " << newData->b << " " << newData->str << std::endl;

	return 0;
}