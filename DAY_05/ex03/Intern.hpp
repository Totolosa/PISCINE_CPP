#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"


class Intern {
	public:
		Intern();
		Intern(Intern const& src);
		~Intern();

		Form* createShrubberyCreationForm(std::string target);
		Form* createRobotomyRequestForm(std::string target);
		Form* createPresidentialPardonForm(std::string target);
		Form* makeForm(std::string const & name, std::string const & target);

		Intern& operator=(Intern const& rhs);
	private:
		
};
typedef Form* (Intern::*func_ptr)(std::string target);

#endif