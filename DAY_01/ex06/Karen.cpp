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
	std::cout << "[DEBUG]" << std::endl << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
	return ;
}

void	Karen::info( void )
{
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon cost more money." << std::endl
		<< "You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
	return ;
}

void	Karen::warning( void )
{
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl
		<< "I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
	return ;
}

void	Karen::error( void )
{
	std::cout << "[ERROR]" << std::endl << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
	return ;
}
void	Karen::complain( std::string level )
{
	std::string str_tabl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	switch (level[0])
	{
		case ('D') :
			(this->*tab_func[0])();
		case ('I') :
			(this->*tab_func[1])();
		case ('W') :
			(this->*tab_func[2])();
		case ('E') :
			(this->*tab_func[3])();
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return ;
}