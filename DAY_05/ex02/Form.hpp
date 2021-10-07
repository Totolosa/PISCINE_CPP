#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
	public:
		Form();
		Form(std::string name, int gradSign, int gradExec);
		Form(Form const& src);
		virtual ~Form();

		std::string const &	getName() const;
		bool const &		getSignedBool() const;
		int const &			getGradeSign() const;
		int const &			getGradeExec() const;
		void				beSigned(Bureaucrat const & bur);

		Form& operator=(Form const& rhs);

		class GradeTooHighException : public std::exception {
			public :
				virtual const char* what() const throw () {
					return ("Form : Grade too hight , max = 1");
				}
		};
		class GradeTooLowException : public std::exception {
			public :
				virtual const char* what() const throw () {
					return ("Form : Grade too low , min = 150");
				}
		};

	private:
		std::string const	_name;
		int const			_gradeSign;
		int const			_gradeExec;
		bool				_signed;
};

std::ostream &	operator<<(std::ostream & out, Form const & rhs);

#endif