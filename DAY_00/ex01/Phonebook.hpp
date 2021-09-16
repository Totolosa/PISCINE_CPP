#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip> 
# include "Contact.hpp"

class	Phonebook
{
public:
	Phonebook(void);
	~Phonebook(void);
	
	void add_contact(void);
	void search_contact(void);
	
private :
	Contact	contacts[8];
	int		nbr_contact;
	void display_info(int i, Contact contact) const;
};

#endif