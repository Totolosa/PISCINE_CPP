#include "easyfind.hpp"

int main() {
	std::list<int>		list_int;
	std::vector<int>	vec_int;

	list_int.push_back(1);
	list_int.push_back(3);
	list_int.push_back(6);
	list_int.push_back(0);
	list_int.push_back(9);
	vec_int.push_back(1);
	vec_int.push_back(3);
	vec_int.push_back(6);
	vec_int.push_back(0);
	vec_int.push_back(9);
	int to_find = 6;
	try {
		easyfind< std::list<int> >(list_int, to_find);
		easyfind< std::vector<int> >(vec_int, to_find);
		std::cout << to_find << " found" << std::endl;
	}
	catch (NotFind & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}