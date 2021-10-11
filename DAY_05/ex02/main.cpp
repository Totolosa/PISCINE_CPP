#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(){
	try {
		Bureaucrat a("toto", 1);
		Bureaucrat b("Regis", 150);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		ShrubberyCreationForm c("le jardinier");
		std::cout << c << std::endl;
		a.executeForm(c);
		b.executeForm(c);
		a.signForm(c);
		std::cout << c << std::endl;
		b.executeForm(c);
		a.executeForm(c);
		std::cout << c << std::endl;


		ShrubberyCreationForm d("test operation '='");
		std::cout << d << std::endl;
		d = c;
		std::cout << d << std::endl;

		RobotomyRequestForm e("La victime");
		a.signForm(e);
		a.executeForm(e);
		a.executeForm(e);
		a.executeForm(e);
		a.executeForm(e);

		PresidentialPardonForm f("l'epee d'ophile");
		a.signForm(f);
		a.executeForm(f);
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
