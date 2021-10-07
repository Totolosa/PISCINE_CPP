#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) {
	*this = src;
}

Bureaucrat::~Bureaucrat(void) {}

std::string const & Bureaucrat::getName() const {
	return _name;
}

int const &			Bureaucrat::getGrade() const {
	return _grade;
}

void				Bureaucrat::incGrade() {
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade--;
}

void				Bureaucrat::decGrade() {
	if (_grade >= 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form & formu) {
	try {
		formu.beSigned(*this);
		std::cout << getName() << " signs " << formu.getName() << std::endl;
	}
	catch (Form::GradeTooLowException & e) {
		std::cout << getName() << " cannot sign because his grade is too low" << std::endl;
	}
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs) {
	_grade = rhs.getGrade();
	return *this;
}

std::ostream &	operator<<(std::ostream & out, Bureaucrat const & rhs) {
	out << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade();
	return (out);
}