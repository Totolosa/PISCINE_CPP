#include "iter.hpp"

int main( void ) {
	int tab_int[] = {1, 2, 3, 4, 5};
	
	::iter(tab_int, 5, print<int>());

	return 0;
}