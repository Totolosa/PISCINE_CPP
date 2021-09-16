#include "Phonebook.hpp"

Phonebook::Phonebook(void) : nbr_contact(0)
{
	return ;
}

Phonebook::~Phonebook(void) 
{
	return ;
}

void Phonebook::add_contact(void)
{
	if (nbr_contact < 8)
	{
		contacts[nbr_contact].set_firstname();
		contacts[nbr_contact].set_lastname();
		contacts[nbr_contact].set_nickname();
		contacts[nbr_contact].set_phonenumber();
		contacts[nbr_contact].set_darkestsecret();
		this->nbr_contact++;
	}
	else
	{
		for (int i = 0; i < 7; i++)
			contacts[i] = contacts[i + 1];
		contacts[7].set_firstname();
		contacts[7].set_lastname();
		contacts[7].set_nickname();
		contacts[7].set_phonenumber();
		contacts[7].set_darkestsecret();
	}
	std::cout << "Contact Added !" << std::endl;
	return ;
}

void Phonebook::display_info(int i, Contact contact) const
{
	std::string info;

	if (i == 1)
		info = contact.get_firstname();
	else if (i == 2)
		info = contact.get_lastname();
	else if (i == 3)
		info = contact.get_nickname();
	if (info.size() > 9)
	{
		info.resize(9);
		std::cout << info << ".|";
	}
	else
		std::cout << std::setw(10) << std::left << info << "|";
	if (i == 3)
		std::cout << std::endl;
}

static void display_details(Contact contact)
{
	std::cout << "First name : " << contact.get_firstname() << std::endl; 
	std::cout << "Last name : " << contact.get_lastname() << std::endl; 
	std::cout << "Nickname : " << contact.get_nickname() << std::endl; 
	std::cout << "Phone number : " << contact.get_phonenumber() << std::endl; 
	std::cout << "Darkest secret : " << contact.get_darkestsecret() << std::endl; 
}

void Phonebook::search_contact(void)
{
	int index = -1;
	
	if (nbr_contact == 0)
	{
		std::cout << "No registred contact in phonebook!" << std::endl;
		return ;
	}
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|  index   |first name|last name | nickname |" << std::endl;
	std::cout << "⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻" << std::endl;
	for (int i = 0; i < nbr_contact; i++)
	{
		std::cout << "|" << std::setw(10) << std::left << i + 1 << "|";
		display_info(1, contacts[i]);
		display_info(2, contacts[i]);
		display_info(3, contacts[i]);
	}
	std::cout << "⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻" << std::endl;
	
	std::cout << "Which contact index do you want to see the information from? ";
	while (index < 1 || index > nbr_contact)
	{
		std::cin >> index;
		if (std::cin.fail() || std::cin.eof() || index < 1 || index > nbr_contact)
		{
			std::cout << "Please put a valid index : ";
			std::cin.clear();
			std::cin.ignore(10000,'\n');
			index = -1;
		}
	}
	display_details(contacts[index - 1]);
	std::cin.ignore(10000,'\n');
	return ;
}
