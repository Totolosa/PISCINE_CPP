#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";

	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "adress of string : &str = "<< &string << std::endl;
	std::cout << "adress of pointer's string : &stringPTR = "<< stringPTR << std::endl;
	std::cout << "adress of reference's string : &stringREF = "<< &stringREF << std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}