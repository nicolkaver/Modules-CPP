#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

# define IDEAS 100

class Brain
{
public:
		Brain();
		Brain(const Brain &);
		~Brain();
		Brain & operator=(const Brain &);
		std::string ideas[IDEAS];
};

#endif