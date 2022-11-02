#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {
    public:
        HumanA(std::string name, Weapon &_weapon);
        ~HumanA(void);
        
        void attack(void) const;

	    Weapon& getWeapon(void) const;
    	void setWeapon(Weapon& weapon);
        void setName(std::string name);
        std::string getName(void) const;

    
    private:
        std::string _name;
        Weapon &_weapon;
};

#endif