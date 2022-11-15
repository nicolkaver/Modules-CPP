#include "Harl.hpp"

Harl::Harl(void) 
{
    _complain_list[DEBUG].level = "debug";
    _complain_list[DEBUG].func_ptr = &Harl::_debug;
    _complain_list[INFO].level = "info";
    _complain_list[INFO].func_ptr = &Harl::_info;
    _complain_list[WARNING].level = "warning";
    _complain_list[WARNING].func_ptr = &Harl::_warning;
    _complain_list[ERROR].level = "error";
    _complain_list[ERROR].func_ptr = &Harl::_error;
}
Harl::~Harl(void) {}

void    Harl::_debug(void)
{
    std::cout << "I love having extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl << std::endl;
}

void    Harl::_info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl << std::endl;
}

void    Harl::_warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std:: cout << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void    Harl::_error(void)
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl << std::endl;
}

void    Harl::complain(std::string level)
{
    for (int i = 0; i < NUM_LEVEL; i++)
    {
        if (_complain_list[i].level == level)
            return (this->*_complain_list[i].func_ptr)();
    }
    std::cout << "Nothing significant !!!" << std::endl;
}