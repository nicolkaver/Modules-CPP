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

#include "phonebook.hpp"

int	main(void)
{
	char *str;

	std::cin >> str;
	if (str != "ADD" || str != "SEARCH" || str != "EXIT")
		std::cout << "Enter ADD, SEARCH or EXIT only";
	if (str == "ADD")

}
