#include "Harl.hpp"

Harl::Harl(void) {}
    
Harl::~Harl(void) {}

void    Harl::_debug(void)
{
    std::cout << RED << "[ DEBUG ]" << NC << std::endl;
    std::cout << "I love having extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl << std::endl;
}

void    Harl::_info(void)
{
    std::cout << RED << "[ INFO ]" << NC << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl << std::endl;
}

void    Harl::_warning(void)
{
    std::cout << RED << "[ WARNING ]" << NC << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std:: cout << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void    Harl::_error(void)
{
    std::cout << RED << "[ ERROR ]" << NC << std::endl;
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl << std::endl;
}

void    Harl::complain(std::string level)
{
	std::string complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int filterLevel = -1;
	for (int i = 0; i < NUM_LEVEL; i++)
	{
		if (!complaints[i].compare(level))
			filterLevel = i;
	}

	switch (filterLevel)
	{
		case DEBUG:
			this->_debug();
		case INFO:
			this->_info();
		case WARNING:
			this->_warning();
		case ERROR:
			this->_error();
			break;
		default:
			std::cout <<  "[ Probably complaining about insignificant problems ]" << std::endl;
	};
}
