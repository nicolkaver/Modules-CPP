#ifndef DIAMOND_TRAP
# define DIAMOND_TRAP

# include <iostream>
# include <string>
# include <climits> //INT_MAX
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define BLUE "\033[1;34m"
# define NC "\033[0m"

class DiamondTrap: public ScavTrap, public FragTrap {
public:
	DiamondTrap(void);
	DiamondTrap(std::string);
	DiamondTrap(DiamondTrap const &);
	DiamondTrap & operator=(DiamondTrap const & rhs);
	~DiamondTrap(void);

	void attack(const std::string & target);

private:
	std::string name;
};

#endif
