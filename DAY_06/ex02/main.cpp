#include <iostream>
#include <cstdlib>
#include <unistd.h>

class Base {
	public:
		virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base * generate(void) {
	srand (time(NULL));
	int res = rand() % 3 + 1;

	if (res == 1) {
		std::cout << "Generate A" << std::endl;
		return (new A);
	}
	else if (res == 2) {
		std::cout << "Generate B" << std::endl;
		return (new B);
	}
	else {
		std::cout << "Generate C" << std::endl;
		return (new C);
	}
}

void identify(Base * p) {
	if (!p) {
		std::cout << "pointer NULL" << std::endl;
		return ;
	}
	else if (dynamic_cast<A*>(p) != NULL)
		std::cout << "ptr * : A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "ptr * : B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "ptr * : C" << std::endl;
}

void identify( Base & p) {
	Base tmp;
	
	try {
		tmp = dynamic_cast<A&>(p);
		std::cout << "ref & : A" << std::endl;
	}
	catch (std::bad_cast &bc) {}
	try {
		tmp = dynamic_cast<B&>(p);
		std::cout << "ref & : B" << std::endl;
	}
	catch (std::bad_cast &bc) {}
	try {
		tmp = dynamic_cast<C&>(p);
		std::cout << "ref & : C" << std::endl;
	}
	catch (std::bad_cast &bc) {}
}

int main() {
	Base *a = generate();
	identify(a);
	identify(a);

	identify(NULL);

	delete a;
}