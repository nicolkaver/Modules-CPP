#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title): _name(name), _title(title) {
    std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void) {
    std::cout << this->_name << ": My job is done here !" << std::endl;
    std::map<std::string, ASpell*>::iterator it_begin = _array.begin();
    std::map<std::string, ASpell*>::iterator ir_end = _array.end();
    while (it_begin != it_end) {
        delete it_begin->second;
        ++it_begin;
    }
    this->_array.clear();
}

std::string const & Warlock::getName(void) const {
    return (this->_name);
}

std::string const & Warlock::getTitle(void) const {
    return (this->_title);
}

void Warlock::setTitle(std::string const & title) {
    this->_title = title;
}

void Warlock::introduce(void) const {
    std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell) {
    if (spell)
        _array.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(std::string spell) {
    std::map<std::string, ASpell*>::iterator it = _array.find(spell);
    if (it != _array.end())
        delete it->second;
    _array.erase(spell);
}

void Warlock::launchSpell(std::string name, ATarget const & target) {
    ASpell* spell = _array[name];
    if (spell)
        spell->launch(target);
}