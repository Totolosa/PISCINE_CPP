#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class	Contact
{
public:
	Contact(void);
	~Contact(void);

	std::string get_firstname(void) const;
	std::string get_lastname(void) const;
	std::string get_nickname(void) const;
	std::string get_phonenumber(void) const;
	std::string get_darkestsecret(void) const;

	void set_firstname(void);
	void set_lastname(void);
	void set_nickname(void);
	void set_phonenumber(void);
	void set_darkestsecret(void);

	Contact &	operator=(Contact const & rhs);

private :
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};

#endif