#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <string>
# include <iostream>
# include <map>
# include "ASpell.hpp"

class ASpell;

class SpellBook {
public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell*);
    void forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &);

private:
    std::map<std::string, ASpell*> _spellArray;
    SpellBook(SpellBook const &);
    SpellBook & operator=(SpellBook const &);  

};


#endif