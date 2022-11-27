#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>
# include <string>
# include <climits> //INT_MAX
# include "ClapTrap.hpp"

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define BLUE "\033[1;34m"
# define NC "\033[0m"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap(void);
	ScavTrap(std::string);
	ScavTrap(ScavTrap const &);
	ScavTrap & operator=(ScavTrap const & rhs);
	~ScavTrap(void);

	void attack(const std::string& target);
	void guardGate();
};

#endif

