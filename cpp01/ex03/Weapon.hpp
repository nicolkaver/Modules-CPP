#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define NC "\033[0m"

class Weapon {
    public:
        Weapon(std::string type);
        ~Weapon(void);

        const std::string& getType(void) const;
        void setType(const std::string &type);
    
    private:
        std::string _type;
};

#endif