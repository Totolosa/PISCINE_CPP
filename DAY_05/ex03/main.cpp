#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main(){
	try {
		Bureaucrat a("toto", 1);
		Bureaucrat b("Regis", 150);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		ShrubberyCreationForm c("formulaire");
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
		std::cout << std::endl;

		Intern g;
		Form *test1, *test2, *test3;
		try {
			test1 = g.makeForm("ShrubberyForm", "nobody");
			test2 = g.makeForm("RobotomiseForm", "nobody");
			test3 = g.makeForm("DoesNotExist", "nobody");
		}
		catch (Intern::FormDontExist & e) {
			std::cout << e.what() << std::endl;
		}
		delete test1;
		delete test2;

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
