#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& name) : Form(name, 145, 137) {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : Form(src) {
	// *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs) {
	_signed = rhs.getSignedBool();
	return *this;
}