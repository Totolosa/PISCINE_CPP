#include "Fixed.hpp"

int main()
{
	Fixed	a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl << std::endl;

	b.compare(c, "b", "c");
	b.compare(d, "b", "d");
	std::cout << std::endl;

	std::cout << "c + b = " << c + b << std::endl;
	std::cout << "c - b = " << c - b << std::endl;
	std::cout << "c * b = " << c * b << std::endl;
	std::cout << "c / b = " << c / b << std::endl;
	Fixed const e(Fixed(5.05f) * Fixed(2));
	std::cout << "e(Fixed(5.05f) * Fixed(2)) = " << e << std::endl << std::endl;

	Fixed f;
	std::cout << "f = " << f << std::endl;
	std::cout << "++f = " << ++f << std::endl;
	std::cout << "f = " << f << std::endl;
	std::cout << "f++ = " << f++ << std	::endl;
	std::cout << "f = " << f << std::endl << std::endl;


	Fixed g(10);
	Fixed h(10.42f);
	std::cout << Fixed::min(g, h) << std::endl;
	std::cout << Fixed::max(g, h) << std::endl;
	Fixed const i(20);
	Fixed const j(20.42f);
	std::cout << Fixed::min(i, j) << std::endl;
	std::cout << Fixed::max(i, j) << std::endl;
	std::cout << Fixed::min(g, i) << std::endl;
	std::cout << Fixed::max(g, i) << std::endl;

	return 0;
}