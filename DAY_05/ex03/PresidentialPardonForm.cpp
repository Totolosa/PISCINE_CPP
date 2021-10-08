#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(std::string const& name) : Form(name, 25, 5) {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : Form(src) {
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	Form::checkExec(executor);
	std::cout << getName() << " has been forgiven by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs) {
	Form::setSigned(rhs.getSignedBool());
	return *this;
}