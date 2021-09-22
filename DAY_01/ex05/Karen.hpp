#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <utility>
# include <functional>

class	Karen
{
public:
	Karen( void );
	~Karen( void );

	void complain( std::string level );

private :
	typedef void (Karen::*funcPtr)( void );
	funcPtr tab_func[4];
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif