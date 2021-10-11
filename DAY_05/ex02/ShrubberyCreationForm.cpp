#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& name) : Form(name, 145, 137) {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : Form(src) {
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	Form::checkExec(executor);
	std::ofstream outfile((getName() + "_shrubbery"));
	outfile << "           .     .  .      +     .      .          ." << std::endl
	<< "     .       .      .     #       .           ." << std::endl
	<< "        .      .         ###            .      .      ." << std::endl
	<< "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl
	<< "          .      . \"####\"###\"####\" . " << std::endl
	<< "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl
	<< "  .             \"#########\"#########\"        .        ." << std::endl
	<< "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl
	<< "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl
	<< "                .\"##\"#####\"#####\"##\"           .      ." << std::endl
	<< "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl
	<< "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl
	<< "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl
	<< "            .     \"      000      \"    .     ." << std::endl
	<< "       .         .   .   000     .        .       ." << std::endl
	<< ".. .. ..................O000O........................ ...... ..." << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs) {
	Form::setSigned(rhs.getSignedBool());
	return *this;
}