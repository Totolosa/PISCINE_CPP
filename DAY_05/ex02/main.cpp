#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	try {
		Bureaucrat a("toto", 10);
		std::cout << a << std::endl;
		Form b("formulaire qui casse la tete", 20, 30);
		std::cout << b << std::endl;
		a.signForm(b);
		std::cout << b << std::endl;

		Bureaucrat c("Regis", 150);
		std::cout << c << std::endl;
		Form d("formulaire pas dur du tout", 149, 149);
		std::cout << d << std::endl;
		c.signForm(d);
		std::cout << d << std::endl;
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
