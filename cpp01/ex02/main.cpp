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

	std::cout << "\033[4mOriginal string address:\033[0m " << &originalString << std::endl;
	std::cout << "\033[4mstringPTR address:\033[0m " << stringPTR << std::endl;
	std::cout << "\033[4mstringREF address:\033[0m " << &stringREF << std::endl << std::endl;
	std::cout << "\033[4mOriginal string value:\033[0m " << originalString << std::endl;
	std::cout << "\033[4mstringPTR value:\033[0m " << *stringPTR << std::endl;
	std::cout << "\033[4mstringREF value:\033[0m " << stringREF << std::endl;
	return (0);
}
