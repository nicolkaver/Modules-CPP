/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboratko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:37:02 by nboratko          #+#    #+#             */
/*   Updated: 2022/10/26 18:18:52 by nboratko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include <string.h>
//#include <algorithm> 
//#include <bits/stdc++.h>
//#include <stdio.h>

int	main(int ac, char **av)
{
	int i;
	size_t j;
	std::string buf;

	for (i = 1; i < ac; i++)
	{
		buf = av[i];
		for (j = 0; j < buf.length(); j++)
		{
			av[i][j] = toupper(av[i][j]);
			std::cout << av[i][j];
		}	
	}
	if (ac == 1)
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE*";
	std::cout << std::endl;
	return (0);
}

// Cette methode aurait ete interessante a utiliser mais elle necessite l'utilisation
// de la STL qui est interdite pour cet exercice.
 
/*int	main(int ac, char **av)
{
	int	i;
	std::string buf;

	for (i = 1; i < ac; i++)
	{
		buf = av[i];
		transform(buf.begin(), buf.end(), buf.begin(), ::toupper);
		std::cout << buf;
	}
	if (ac == 1)
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE*";
	std::cout << std::endl;
	return (0);
}*/
