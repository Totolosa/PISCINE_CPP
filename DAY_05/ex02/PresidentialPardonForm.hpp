#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <fstream>

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const& name);
		PresidentialPardonForm(PresidentialPardonForm const& src);
		~PresidentialPardonForm();

		virtual void	execute(Bureaucrat const & executor) const;

		PresidentialPardonForm& operator=(PresidentialPardonForm const& rhs);
	private:
		
};

#endif