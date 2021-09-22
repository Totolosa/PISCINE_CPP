#include "Karen.hpp"

Karen::Karen( void )
{
	tab_func[0] = &Karen::debug;
	tab_func[1] = &Karen::info;
	tab_func[2] = &Karen::warning;
	tab_func[3] = &Karen::error;
}

Karen::~Karen()
{
}

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	return ;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	return ;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	return ;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return ;
}
void	Karen::complain( std::string level )
{
	std::string str_tabl[4] = 		{"DEBUG", "INFO", "WARNING", "ERROR"};
	 
	for(int i = 0; i < 4; i++)
		if (str_tabl[i] == level)
			(this->*tab_func[i])();
	return ;
}