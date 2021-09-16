#include "Phonebook.hpp"
#include "Contact.hpp"

int main()
{
	Phonebook	phonebook;
	std::string	command("TEST");
	
	std::cout << "Welcome to your phonebook \"ECLATE AU SOL\"" << std::endl;
	while (command != "EXIT")
	{
		std::cout << "Please, enter the command of your choice : ADD, SEARCH or EXIT : ";
		std::getline (std::cin, command);
		if (!std::cin.good())
			exit(0);
		else if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
	}
	return 0;
}