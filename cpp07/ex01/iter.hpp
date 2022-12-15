#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define BLUE "\033[1;34m"
# define NC "\033[0m"
# define CGREEN(x) GREEN x NC

template <typename T>
void print(T const & t) {
    std::cout << t << std::endl;
}

template <typename T>
void	iter(T *tab, int len, void(*f)(T const &))
{
	for (int i = 0; i < len; i++)
		f(tab[i]);
}

#endif