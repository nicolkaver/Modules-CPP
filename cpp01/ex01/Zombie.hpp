#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define NC "\033[0m"

class Zombie {
public:
    Zombie(void);
    ~Zombie(void);

        void announce(void) const;
        std::string getName(void) const;
        bool setName(std::string name);

    private:
        std::string _name;
};

Zombie* zombieHorde( int N, std::string name );
Zombie *newZombie( std::string name );

#endif