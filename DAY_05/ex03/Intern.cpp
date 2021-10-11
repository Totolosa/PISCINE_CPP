#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// ------------------------------- CONSTRUCTOR ---------------------------------

Intern::Intern(void) {}

Intern::Intern(Intern const& src) {
	*this = src;
}

// -------------------------------- DESTRUCTOR ---------------------------------

Intern::~Intern(void) {}

// -------------------------------- ACCESSORS ----------------------------------



// --------------------------------- METHODS -----------------------------------

Form* Intern::createShrubberyCreationForm(std::string target) {
	return (new ShrubberyCreationForm(target));
}

Form* Intern::createRobotomyRequestForm(std::string target) {
	return (new RobotomyRequestForm(target));
}

Form* Intern::createPresidentialPardonForm(std::string target) {
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm(std::string const & name, std::string const & target) {
	std::string choises[3] = {"ShrubberyForm", "RobotomiseForm", "PardonForm"};
	func_ptr ar_ptr[3] = {&Intern::createShrubberyCreationForm, &Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm};

	int i;
	for (i = 0; i < 3; i++) {
		if (name == choises[i]) {
			std::cout << "Intern creates " << choises[i] << std::endl;
			return (this->*ar_ptr[i])(target);
		}
	}
	throw FormDontExist(name);
}

// ---------------------------- OPERATION OVERLOAD -----------------------------

Intern&	Intern::operator=(Intern const& rhs) {
	(void)rhs;
	return *this;
}