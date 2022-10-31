/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboratko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:44:28 by nboratko          #+#    #+#             */
/*   Updated: 2022/10/31 17:50:31 by nboratko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string originalString = "HI THIS IS BRAIN";
	std::string *stringPTR = &originalString;
	std::string &stringREF = originalString;

	std::cout << "Original string address: " << &originalString << std::endl;
	std::cout << "Address from stringPTR: " << stringPTR << std::endl;
	std::cout << "Address from stringREF: " << stringREF << std::endl;

	
	return (0);
}
