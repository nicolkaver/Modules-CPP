#include "Contact.hpp"
#include <string>
#include <iostream>

int Contact::nb_contact = 0;

Contact::Contact(void){}

Contact::~Contact(void){}

void Contact::init_contact
{
    int check = 0;
    Contact::nb_contact++;
    std::cout << "first name : " << std::endl;
    std::getline (std::cin, this->_first_name);
    std::cout << "last name : " << std::endl;
    std::getline (std::cin, this->_last_name);
    std::cout << "phone number : " << std::endl;
    std::getline (std::cin, this->_phone_number);
    std::cout << "favorite color : " << std::endl;
    std::getline (std::cin, this->_favorite_color);
}