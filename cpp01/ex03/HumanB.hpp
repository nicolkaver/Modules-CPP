#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <string>
# include <iostream>
# include <cstddef>
# include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string name);
        ~HumanB(void);

        void attack(void) const;

	    Weapon& getWeapon(void) const;
    	void setWeapon(Weapon &weapon);
        void setName(std::string name);
        std::string getName(void) const;
    
    private:
        std::string _name;
        Weapon *_weapon;
};

#endif