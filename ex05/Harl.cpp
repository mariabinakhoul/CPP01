#include "Harl.h"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning( void )
{
	std::cout <<"I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	void	(Harl::*func[])(void) = {&Harl::debug, &Harl::info, &Harl::error, &Harl::warning};
	std::string		lvls[] = {"DEBUG", "INFO", "ERROR", "WARNING"};

	for (int i = 0; i < 4; i++)
	{
		if (lvls[i] == level)
		{
			(this->*func[i])();
			return ;
		}
	}
	std::cout << "Harl won't like this, level does not exist\n";
}