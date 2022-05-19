/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboratko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:37:02 by nboratko          #+#    #+#             */
/*   Updated: 2022/05/19 11:57:37 by nboratko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			std::cout << char(toupper(av[i][j]));
			j++;
		}
	}
	if (ac == 1)
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE*";
	std::cout << std::endl;
	return (0);
}
