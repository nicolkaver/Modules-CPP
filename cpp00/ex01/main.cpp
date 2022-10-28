/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboratko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:38:32 by nboratko          #+#    #+#             */
/*   Updated: 2022/05/19 13:42:36 by nboratko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook phone_book;
	std::string command;

	do {
		command = phone_book.get_command();
		if(command.empty())
			return 0;
		if (!command.compare("ADD"))
			phone_book.add_contact();
		else if (!command.compare("SEARCH"))
			phone_book.search_contact();
		else if (command.compare("EXIT"))
		{
			std::cout << std::endl << "Command \"" << command << "\" does not exist." << std::endl;
		}
	} while (command.compare("EXIT"));
	std::cout << "GOODBYE !" << std::endl;
	return 0;
}
