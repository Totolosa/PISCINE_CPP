#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	public:
		Array() : _size(0), tab(nullptr) {}
		Array(unsigned int n) : tab(new T[n]), _size(n) {}
		Array(Array const& src) : tab(nullptr), _size(0) { *this = src; }
		~Array() { delete [] tab; }

		unsigned int size() const { return _size; }
		
		Array & operator=(Array const& rhs) {
			if (tab != nullptr)
				delete tab;
			tab = new T[rhs.size()];
			for (unsigned int i = 0; i < rhs._size; i++)
				tab[i] = rhs.tab[i];
			return *this;
		}
		T & operator[](int i) {
			if (i < 0 || i >= static_cast<int>(_size))
				throw std::exception();
			return tab[i];
		}

	private:
		T				*tab;
		unsigned int	_size;
};

#endif