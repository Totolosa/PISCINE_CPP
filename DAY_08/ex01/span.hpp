#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <limits>

class Span {
	public:
		Span(unsigned int n);
		Span(Span const & src);
		~Span();

		void	addNumber(int val);
		int		shortestSpan() const;
		int		longestSpan() const;
		void	addRange(int begin, int end);

		Span & operator=(Span const & rhs);

		class ObjectFull : public std::exception {
			public :
				virtual const char* what() const throw () {
					return ("Object full, impossible to add a new number");
				}
		};
		class TooFewElements : public std::exception {
			public :
				virtual const char* what() const throw () {
					return ("Too few elements in object, impossible to have a span");
				}
		};
		class WrongRange : public std::exception {
			public :
				virtual const char* what() const throw () {
					return ("first param need to be <= of the second");
				}
		};

	private:
		Span();
		std::vector<int>	vec;
		int					max;
};

#endif