#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class	Phonebook
{
public:
	Phonebook(void);
	~Phonebook(void);

private :
	Contact phonebook[8];
};

#endif