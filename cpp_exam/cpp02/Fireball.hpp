#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include <string>
# include <iostream>
# include "ASpell.hpp"

class ASpell;

class Fireball: public ASpell {
public:
    Fireball();
    ~Fireball();

    ASpell* clone() const;
};

#endif