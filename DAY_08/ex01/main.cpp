#include "span.hpp"

int main()
{
	Span sp = Span(5);
	Span sp2 = Span(100000000);

	try {
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(0);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		sp2.addRange(42, 14242);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (Span::ObjectFull & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Span::TooFewElements & e) {
		std::cout << e.what() << std::endl;
	}
	catch (Span::WrongRange & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}