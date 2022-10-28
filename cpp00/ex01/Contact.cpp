#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

int Contact::nb_contact = 0;
int Contact::replace = 0;

Contact::Contact(void){}

Contact::~Contact(void){}

void Contact::init_first_name(void)
{
    this->_first_name.clear();
    while (this->_first_name.empty())
    {
        std::cout << "First name : " << std::endl;
        std::getline (std::cin, this->_first_name);
        if (this->_first_name.length() > 10)
        {
         std::string buf = this->_first_name.substr(0, 9) + '.';
         this->_first_name = buf;
        }
    }
}

void Contact::init_last_name(void)
{
    this->_last_name.clear();
    while (this->_last_name.empty())
    {
        std::cout << "Last name : " << std::endl;
        std::getline (std::cin, this->_last_name);
        if (this->_last_name.length() > 10)
        {
         std::string buf = this->_last_name.substr(0, 9) + '.';
         this->_last_name = buf;
        }
    }
}

void Contact::init_nickname(void)
{
    this->_nickname.clear();
    while (this->_nickname.empty())
    {
        std::cout << "Nickname : " << std::endl;
        std::getline (std::cin, this->_nickname);
        if (this->_nickname.length() > 10)
        {
         std::string buf = this->_nickname.substr(0, 9) + '.';
         this->_nickname = buf;
        }
    }
}

void Contact::init_phone_number(void)
{
    this->_phone_number.clear();
    while (this->_phone_number.empty())
    {
        std::cout << "Phone number : " << std::endl;
        std::getline (std::cin, this->_phone_number);
        if (this->_phone_number.length() > 10)
        {
         std::string buf = this->_phone_number.substr(0, 9) + '.';
         this->_phone_number = buf;
        }
    }
}

void Contact::init_darkest_secret(void)
{
    this->_darkest_secret.clear();
    while (this->_darkest_secret.empty())
    {
        std::cout << "Darkest secret : " << std::endl;
        std::getline (std::cin, this->_darkest_secret);
        if (this->_darkest_secret.length() > 10)
        {
         std::string buf = this->_darkest_secret.substr(0, 9) + '.';
         this->_darkest_secret = buf;
        }
    }
}

void Contact::init_contact(void)
{
	Contact::init_first_name();
    Contact::init_last_name();
    Contact::init_nickname();
    Contact::init_phone_number();
    Contact::init_darkest_secret();
}

void Contact::display_contact(void) const
{
    std::cout << "First name :" << this->_first_name << std::endl;
    std::cout << "Last name :" << this->_last_name << std::endl;
    std::cout << "Nickname :" << this->_nickname << std::endl;
    std::cout << "Phone number :" << this->_phone_number << std::endl;
    std::cout << "Darkest secret :" << this->_darkest_secret << std::endl;    
}

void Contact::list_contact(const int i) const
{
    std::cout << std::setw(10);
    std::cout << i + 1;
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << this->_first_name;
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << this->_last_name;
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << this->_nickname;
    std::cout << std::endl;
}