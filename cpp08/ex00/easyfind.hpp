#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

template<typename T>
typename T::iterator easyfind(T & container, int const toFind) {
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), toFind);
    if (it == container.end())
        throw std::exception();
    std::cout << toFind << " is in this container." << std::endl;
    return (it);
}

#endif