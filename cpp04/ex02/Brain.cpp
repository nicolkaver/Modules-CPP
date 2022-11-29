#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default contructor called for Brain." << std::endl;
}

Brain::Brain(const Brain& src)
{
	std::cout << "Copy constructor called for Brain." << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Destructor called for Brain" << std::endl;
}

Brain& Brain::operator=(Brain const & rhs)
{
	std::cout << "Copy assignment operator called for Brain." << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < IDEAS; ++i)
			ideas[i] = rhs.ideas[i];
	}
	return (*this);
}
