#include "span.hpp"

Span::Span() {} ;

Span::Span(unsigned int n) : max(n) {
	vec.reserve(max);
}

Span::Span(Span const & src) {
	*this = src;
}
Span::~Span() {
	vec.clear();
}

void	Span::addNumber(int val) {
	if (vec.size() == static_cast<size_t>(max))
		throw ObjectFull();
	vec.push_back(val);
}

void	Span::addRange(int begin, int end) {
	if (begin > end)
		throw WrongRange();
	for (int i = begin; i <= end; i++)
		addNumber(i);
}

int		Span::shortestSpan() const {
	int res = INT32_MAX;
	int tmp;

	if (vec.size() == 0 || vec.size() == 1)
		throw TooFewElements();
	for (size_t i = 0; i < vec.size(); i++) {
		for (size_t j = i + 1; j < vec.size(); j++) {
			tmp = abs(vec[i] - vec[j]);
			if (res > tmp)
				res = tmp;
		}
	}
	return res;
}

int		Span::longestSpan() const {
	int res = 0;
	int tmp;

	if (vec.size() == 0 || vec.size() == 1)
		throw TooFewElements();
	for (size_t i = 0; i < vec.size(); i++) {
		for (size_t j = i + 1; j < vec.size(); j++) {
			tmp = abs(vec[i] - vec[j]);
			if (res < tmp)
				res = tmp;
		}
	}
	return res;
}

Span & Span::operator=(Span const & rhs) {
	if (!vec.empty())
		vec.clear();
	max = rhs.max;
	vec.reserve(max);
	for (int i = 0; i < rhs.max; i++)
		vec[i] = rhs.vec[i];
	return (*this);
}