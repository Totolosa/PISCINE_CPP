#include "Karen.hpp"

int main(int argc, char *argv[])
{
	Karen	karen;
	
	if (argc != 2)
	{
		std::cout << "Only 1 argument accepted" << std::endl;
		exit(0);
	}
	std::string	level = argv[1];
	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
		level = "OTHER";
	karen.complain(level);
	return (0);
}