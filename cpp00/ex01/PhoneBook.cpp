#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <ios>

PhoneBook::PhoneBook(void)
{
    std::cout << "Welcome to your PhoneBook, your contact list is empty" << std::endl;
std::cout << "Press \033[4mADD\033[0m to add a contact, \033[4mSEARCH\033[0m to display a contact or \033[4mEXIT\033[0m in order to quit" << std::endl << std::endl;
}
PhoneBook::~PhoneBook(void){}

std::string PhoneBook::get_command(void) const
{
    std::string command;

    std::cout << "Please press your command" << std::endl;
    std::cin >> command;
	if (std::cin.eof())
			return ("");
	std::cin.ignore();
	return (command);
}

void PhoneBook::add_contact(void)
{
    int choice;

    if (Contact::nb_contact < 8)
        this->_contact[Contact::nb_contact].init_contact();
    else
    {
        std::cout << "Your PhoneBook is full." << std::endl;
        std::cout << "We will replace your eldest contact by your new contact" << std::endl;
        std::cout << "Press 1 to continue, press 0 to abort" << std::endl;
        std::cin >> choice;
        if (choice == 0)
            return ;
        else if (choice == 1)
		{
			Contact::nb_contact = 0;
            this->_contact[Contact::nb_contact].replace_contact();
		}
		else
            std::cout << "Sorry, I did not understand your choice" << std::endl;
    }
}

void	PhoneBook::search_contact(void) const
{
	int	index;
	for (int i = 0; i < Contact::nb_contact; i++)
		_contact[i].list_contact(i);
	if (Contact::nb_contact == 0)
		std::cout << "You don't have any contacts yet." << std::endl;
	else
	{
	while (!(std::cin >> index) || index <= 0 || index > Contact::nb_contact)
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore('\n');
		}
		else
		{
			std::cout << "There is no contact at this index." << std::endl;
			std::cout << "Please try again." << std::endl;
		}
	}
	_contact[index - 1].display_contact();
	std::cin.ignore();
	}
}

