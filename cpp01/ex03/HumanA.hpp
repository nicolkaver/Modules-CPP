#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {
    public:
        HumanA(std::string type);
        ~HumanA(void);
        
        void attack(void) const;

	    Weapon& getWeapon(void) const;
    	void setWeapon(Weapon& weapon);

    
    private:
        std::string _name;
        Weapon *_weapon;
}

#endif