#include "SpellBook.hpp"

SpellBook::SpellBook(void) {}

SpellBook::~SpellBook(void) {
    std::map<std::string, ASpell*>::iterator it_begin = _spellArray.begin();
    std::map<std::string, ASpell*>::iterator it_end = _spellArray.end();
    while (it_begin != it_end) {
        delete it_begin->second;
        ++it_begin;
    }
    _spellArray.clear();
}

void SpellBook::learnSpell(ASpell* spell) {
    if (spell)
        _spellArray.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string const & spell) {
    std::map<std::string, ASpell*>::iterator it = _spellArray.find(spell);
    if (it != _spellArray.end())
        delete it->second;
    _spellArray.erase(spell);
}

ASpell* SpellBook::createSpell(std::string const & spell) {
    std::map<std::string, ASpell*>::iterator it = _spellArray.find(spell);
    if (it != _spellArray.end())
        return (_spellArray[spell]);
    return (NULL);
}