#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {
public:
    Character(std::string name);
	Character(Character const & src);
	~Character();
	Character & operator=(Character const & rhs);

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    AMateria *getInventory(int idx) const;

private:
    std::string _name;
    AMateria* _inventory[4];
};

#endif