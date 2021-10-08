#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <fstream>

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const& name);
		RobotomyRequestForm(RobotomyRequestForm const& src);
		~RobotomyRequestForm();

		virtual void	execute(Bureaucrat const & executor) const;

		RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs);
	private:
		
};

#endif