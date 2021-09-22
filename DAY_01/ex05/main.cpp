#include "Karen.hpp"

int main(int argc, char *argv[])
{
	std::string	level = argv[1];
	if (argc != 2 || (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR"))
	{
		std::cout << "Use just one argument which is : DEBUG, INFO, WARNING or ERROR" << std::endl;
		exit(0);
	}
	Karen	karen;
	
	karen.complain(level);
	return (0);
}