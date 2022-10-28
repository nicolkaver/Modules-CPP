#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
    Zombie(void);
    ~Zombie(void);

    public:
        void announce(void);
        std::string getName(void) const;

    private:
        std::string _name;
}

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif