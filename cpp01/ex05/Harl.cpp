#include "Harl.hpp"

Harl::Harl(void) {}
Harl::~Harl(void) {}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my "
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std:: couot << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl << std::endl;
}



void    Harl::complain(std::string level)
{
    for (int i = 0; i < TOTAL_NUM_OF_LEVEL; i++)
    {
        if (complain_list[i].level == level)
            return (this->*_complain_list[i])
    }
}