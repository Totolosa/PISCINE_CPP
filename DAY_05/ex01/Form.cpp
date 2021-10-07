#include "Form.hpp"

Form::Form(void) : _name("not possible"), _gradeSign(0), _gradeExec(0) {}

Form::Form(std::string name, int gradSign, int gradExec) : _name(name), _gradeSign(gradSign), _gradeExec(gradExec), _signed(0) {
	if (_gradeSign < 1 || _gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (_gradeSign > 150 || _gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const& src) : _name(src.getName()), _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec()), _signed(src.getSignedBool()) {}

Form::~Form(void) {}

std::string const & Form::getName() const {
	return _name;
}

bool const & Form::getSignedBool() const {
	return _signed;
}

int const & Form::getGradeSign() const {
	return _gradeSign;
}

int const & Form::getGradeExec() const {
	return _gradeExec;
}

void Form::beSigned(Bureaucrat const & bur) {
	if (bur.getGrade() > getGradeSign())
		throw Form::GradeTooLowException();
	_signed = 1;
}

Form&	Form::operator=(Form const& rhs) {
	_signed = rhs.getSignedBool();
	return *this;
}

std::ostream &	operator<<(std::ostream & out, Form const & rhs) {
	out << "-----------------------------------" << std::endl
		<< "Form :" << rhs.getName() << std::endl
		<< "grade min to sign = " << rhs.getGradeSign() << std::endl
		<< "grade min to exec = " << rhs.getGradeExec() << std::endl;
	if (rhs.getSignedBool())
		out << "\033[32msigned : ✔\033[0m" << std::endl;
	else
		out << "\033[31msigned : ✗\033[0m" << std::endl;
	out << "-----------------------------------" << std::endl;
	return (out);
}