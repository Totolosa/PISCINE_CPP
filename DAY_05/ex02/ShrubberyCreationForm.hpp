#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const& name);
		ShrubberyCreationForm(ShrubberyCreationForm const& src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);
	private:
		
};

#endif