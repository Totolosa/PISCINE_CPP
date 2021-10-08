#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const& name);
		ShrubberyCreationForm(ShrubberyCreationForm const& src);
		~ShrubberyCreationForm();

		virtual void	execute(Bureaucrat const & executor) const;

		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);
	private:
		
};

#endif