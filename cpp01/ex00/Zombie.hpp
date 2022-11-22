#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define NC "\033[0m"

class Zombie {
public:
    Zombie(std::string name);
    ~Zombie(void);

        void announce(void);
        std::string getName(void) const;

    private:
        std::string _name;
};

Zombie *newZombie( std::string name );
void randomChump( std::string name );

#endif