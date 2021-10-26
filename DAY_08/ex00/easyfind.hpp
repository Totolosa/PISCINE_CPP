#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>

class NotFind : public std::exception {
	public :
		virtual const char* what() const throw () {
			return ("integer not found in the countainer");
		}
};

template <typename T>
int easyfind(T & cont, int val) {
	for (typename T::iterator it = cont.begin(); it != cont.end(); it++)
		if (*it == val)
			return val;
	throw NotFind();
}

#endif