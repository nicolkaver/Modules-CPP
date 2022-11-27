#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>
# include <string>
# include <climits> //INT_MAX

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define NC "\033[0m"

class ClapTrap {
public:
	ClapTrap(void);
	ClapTrap(std::string);
	ClapTrap(ClapTrap const &);
	ClapTrap & operator=(ClapTrap const & rhs);
	~ClapTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void print(void);

	// GETTERS AND SETTERS
	std::string getName(void) const;
	unsigned int getHitPoints(void) const;
	unsigned int getEnergyPoints(void) const;
	unsigned int getAttackDamage(void) const;

	void setHitPoints(unsigned int const);
	void setEnergyPoints(unsigned int const);
	void setAttackDamage(unsigned int const);

protected:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

/*private:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;*/
};

#endif
