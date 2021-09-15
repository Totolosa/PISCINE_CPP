#include "Phonebook.hpp"

Phonebook::Phonebook(void) : nbr_contact(0)
{
	std::cout << "Phonebook Constructor Called" << std::endl;
	return ;
}

Phonebook::~Phonebook(void) 
{
	std::cout << "Phonebook Destructor Called" << std::endl;
	return ;
}

void Phonebook::add_contact(void)
{
	if (nbr_contact < 7)
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

static void display_firstname(Contact contact)
{
	std::string first_name;

	first_name = contact.get_firstname();
	if (first_name.size() > 9)
	{
		first_name.resize(9);
		std::cout << first_name << ".|";
	}
	else
		std::cout << std::setw(10) << std::left << first_name << "|";
}

static void display_lastname(Contact contact)
{
	std::string last_name;

	last_name = contact.get_lastname();
	if (last_name.size() > 9)
	{
		last_name.resize(9);
		std::cout << last_name << ".|";
	}
	else
		std::cout << std::setw(10) << std::left << last_name << "|";
}

static void display_nickname(Contact contact)
{
	std::string nick_name;

	nick_name = contact.get_nickname();
	if (nick_name.size() > 9)
	{
		nick_name.resize(9);
		std::cout << nick_name << ".|";
	}
	else
		std::cout << std::setw(10) << std::left << nick_name << "|";
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
	
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|  index   |first name|last name | nickname |" << std::endl;
	std::cout << "⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻" << std::endl;
	for (int i = 0; i < nbr_contact; i++)
	{
		std::cout << "|" << std::setw(10) << std::left << i << "|";
		display_firstname(contacts[i]);
		display_lastname(contacts[i]);
		display_nickname(contacts[i]);
	}
	std::cout << "⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻⎻" << std::endl;
	
	std::cout << "Which contact index do you want to see the information from? ";
	while (index < 0 || index >= nbr_contact)
	{
		std::cin >> index;
		if (std::cin.fail() || std::cin.eof() || index < 0 || index >= nbr_contact)
		{
			std::cout << "Please put a valid index : ";
			std::cin.clear();
			std::cin.ignore(10000,'\n');
			index = -1;
		}
	}
	display_details(contacts[index]);
	std::cin.ignore(10000,'\n');
	return ;
}
