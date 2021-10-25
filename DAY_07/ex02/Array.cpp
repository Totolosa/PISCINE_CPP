#include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	T *ptr = new T;

	tab = new T[n];
	for (int i = 0; i < n; i++)
		tab[i] = *ptr;
}

template <typename T>
Array<T>::Array(Array const& src) {
	tab = new T[src.size()];
	*this = src;
}

template <typename T>
Array<T>::~Array() {
	delete tab;
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}

template <typename T>
Array<T> & Array<T>::operator=(Array const & rhs) {
	_size = rhs.size();
	for (int i = 0; i < size() && i < rhs.size(); i++)
		tab[i] = rhs.tab[i];
}

template <typename T>
T & Array<T>::operator[](int i) {
	if (i < 0 || i >= _size)
		throw std::exception();
	return (*(tab[i]));
}