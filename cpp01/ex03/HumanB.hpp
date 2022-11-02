#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string type);
        ~HumanB(void);

        void attack(void) const;

	    Weapon& getWeapon(void) const;
    	void setWeapon(Weapon& weapon);

    
    private:
        std::string _name;
        Weapon *_weapon;
}

#endif