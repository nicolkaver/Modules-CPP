#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>
# include <string>
# include <climits> //INT_MAX
# include "ClapTrap.hpp"

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define BLUE "\033[1;34m"
# define NC "\033[0m"

class FragTrap : public ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string);
	FragTrap(FragTrap const &);
	FragTrap & operator=(FragTrap const & rhs);
	~FragTrap(void);

	void highFivesGuys(void);
};

#endif

