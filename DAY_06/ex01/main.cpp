#include <iostream>
#include <iomanip>

struct Data {
	int nbr;
	char c;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data		data;
	uintptr_t	serialized;
	Data		*deserialized;

	data.nbr = 10;
	data.c = 'T';
	std::cout << "data.nbr = " << data.nbr << std::endl;
	std::cout << "data.c = " << data.c << std::endl;
	std::cout << &data << std::endl;
	serialized = serialize(&data);
	std::cout << serialized << std::endl;
	deserialized = deserialize(serialized);
	std::cout << deserialized << std::endl;
	std::cout << "deserialized->nbr = " << data.nbr << std::endl;
	std::cout << "deserialized->c = " << data.c << std::endl;

	return 0;
}
