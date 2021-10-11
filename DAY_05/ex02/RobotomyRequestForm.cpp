#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(std::string const& name) : Form(name, 72, 45) {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) : Form(src) {
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	static int i = 0;
	
	Form::checkExec(executor);
	std::cout << "vzzZZz VzzzZZz vZZzzZz" << std::endl;
	if (i % 2 == 0)
		std::cout << getName() << " have been robotomised succesfully. He can play Fortnite now!" << std::endl;
	else
		std::cout << getName() << " fight well, we could not robotomise him..." << std::endl;
	i++;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs) {
	Form::setSigned(rhs.getSignedBool());
	return *this;
}