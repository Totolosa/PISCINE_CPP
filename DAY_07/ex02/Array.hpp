#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <iostream>

template <typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(Array const& src);
		~Array();

		unsigned int size() const;
		
		Array & operator=(Array const& rhs);
		T & operator[](int i);

	private:
		T				*tab;
		unsigned int	_size;
};

#endif