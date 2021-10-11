#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <sstream>
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

		class FormDontExist : public std::exception {
			public :
				std::string testname;
				FormDontExist(std::string nameForm) : testname("Intern : the form asked \"" + nameForm + "\" don't exist") {}
				virtual ~FormDontExist() throw() {}
				virtual const char* what() const throw () {
					return (testname.c_str());
				}
		};
	private:
		
typedef Form* (Intern::*func_ptr)(std::string target);
};

#endif