#include "Contact.hpp"

/*
**********          CONSTRUCT/DESTRUCT          **********
*/

Contact::Contact(void)
{
	// std::cout << "Contact Constructor Called" << std::endl;
	return ;
}

Contact::~Contact(void) 
{
	// std::cout << "Contact Destructor Called" << std::endl;
	return ;
}

/*
**********          GETERS          **********
*/

std::string Contact::get_firstname(void) const
{
	return Contact::_first_name;
}

std::string Contact::get_lastname(void) const
{
	return Contact::_last_name;
}

std::string Contact::get_nickname(void) const
{
	return Contact::_nickname;
}

std::string Contact::get_phonenumber(void) const
{
	return Contact::_phone_number;
}

std::string Contact::get_darkestsecret(void) const
{
	return Contact::_darkest_secret;
}

/*
**********          SETERS          **********
*/

void Contact::set_firstname()
{
	std::cout << "Enter the new contact first name : ";
	std::getline(std::cin, this->_first_name);
	return ;
}

void Contact::set_lastname(void)
{
	std::cout << "Enter the new contact last name : ";
	std::getline(std::cin, this->_last_name);
	return ;
}

void Contact::set_nickname(void)
{
	std::cout << "Enter the new contact nickname : ";
	std::getline(std::cin, this->_nickname);
	return ;
}

void Contact::set_phonenumber(void)
{
	std::cout << "Enter the new contact phone number : ";
	std::getline(std::cin, this->_phone_number);
	return ;
}

void Contact::set_darkestsecret(void)
{
	std::cout << "Enter the new contact darkest secret : ";
	std::getline(std::cin, this->_darkest_secret);
	return ;
}