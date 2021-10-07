#include "Bureaucrat.hpp"

int main(){
	try {
		Bureaucrat a("toto", 10);
		std::cout << a << std::endl;
		a.decGrade();
		std::cout << "decGrade : " << a << std::endl;
		a.incGrade();
		std::cout << "incGrade : " << a << std::endl;
		// for(int i = 0; i < 20; i++)
		// 	a.incGrade();
		// for(int i = 0; i < 150; i++)
		// 	a.decGrade();

		// Bureaucrat b("tata", 0);
		// Bureaucrat c("tonton", 151);
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
