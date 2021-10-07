#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& src);
		virtual ~Bureaucrat();

		std::string const & getName() const;
		int const &			getGrade() const;
		void				incGrade();
		void				decGrade();

		Bureaucrat& operator=(Bureaucrat const& rhs);
		std::string const	_name;
		int					_grade;

		class GradeTooHighException : public std::exception {
			public :
				virtual const char* what() const throw () {
					return ("Bureaucrat : Grade too hight , max = 1");
				}
		};
		class GradeTooLowException : public std::exception {
			public :
				virtual const char* what() const throw () {
					return ("Bureaucrat : Grade too low , min = 150");
				}
		};

	private :
		Bureaucrat();
};

std::ostream &	operator<<(std::ostream & out, Bureaucrat const & rhs);

#endif