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

	void attack(const std::string& target); // -1 energyPoint
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount); //-1 energyPoint +amount hitPoints

	// GETTERS AND SETTERS
	std::string getName(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	int getAttackDamage(void) const;
	int getDamagePoints(void) const;

	void setHitPoints(int);
	void setEnergyPoints(int);
	void setAttackDamage(int);

private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
	int _damagePoints;
};

#endif
