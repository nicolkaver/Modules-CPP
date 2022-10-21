#include "Contact.hpp"
#include <string>
#include <iostream>

int Contact::nb_contact = 0;

Contact::Contact(void){}

Contact::~Contact(void){}

void Contact::init_contact(void)
{
	std::cin.ignore();
    Contact::nb_contact++;
	std::cout << "First name : " << std::endl;
	std::getline (std::cin, this->_first_name);
	std::cout << "Last name : " << std::endl;
	std::getline (std::cin, this->_last_name);
	std::cout << "Nickname : " << std::endl;
	std::getline (std::cin, this->_nickname);
	std::cout << "Phone number : " << std::endl;
	std::getline (std::cin, this->_phone_number);
	std::cout << "Darkest secret : " << std::endl;
	std::getline (std::cin, this->_darkest_secret);
	}

void Contact::replace_contact(void)
{
	std::cin.ignore();
    std::cout << "first name : " << std::endl;
    std::getline (std::cin, this->_first_name);
    std::cout << "last name : " << std::endl;
    std::getline (std::cin, this->_last_name);
    std::cout << "nickname : " << std::endl;
    std::getline (std::cin, this->_nickname);
    std::cout << "phone number : " << std::endl;
    std::getline (std::cin, this->_phone_number);
    std::cout << "darkest_secret : " << std::endl;
    std::getline (std::cin, this->_darkest_secret);
}

void Contact::display_contact(void) const
{
    std::cout << "first name :" << this->_first_name << std::endl;
    std::cout << "last name :" << this->_last_name << std::endl;
    std::cout << "nickname :" << this->_nickname << std::endl;
    std::cout << "phone number :" << this->_phone_number << std::endl;
    std::cout << "darkest secret :" << this->_darkest_secret << std::endl;    
}

void Contact::list_contact(const int i) const
{
    std::cout << "          " << i + 1;
    std::cout << "|";
    this->_write_string(this->_first_name);
    std::cout << "|";
    this->_write_string(this->_last_name);
    std::cout << "|";
    this->_write_string(this->_nickname);
    std::cout << std::endl;    
}

void Contact::_write_string(const std::string string) const
{
    int len;

    len = 10 - string.length();
    if (len >= 0)
    {
        for(int i = 0; i < len; i++)
            std::cout << " ";
        std::cout << string;
    }
    else
    {
        for(int i = 0; i < 9; i++)
            std::cout << string[i];
        std::cout << ".";
    }
}
