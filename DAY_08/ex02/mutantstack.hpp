#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(MutantStack const& src) : std::stack<T>(src) {}
		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }

		MutantStack& operator=(MutantStack const& rhs) {
			this->c = rhs.c;
			return *this;
		}
};

#endif