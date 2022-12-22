#include "ASpell.hpp"

ASpell::ASpell(void) {}

ASpell::ASpell(std::string const & name, std::string const & effects): _name(name), _effects(effects) {}

ASpell::ASpell(ASpell const & src) {*this = src;}

ASpell::~ASpell(void) {}

ASpell & ASpell::operator=(ASpell const & rhs) {
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_effects = rhs._effects;
    }
    return (*this);
}

std::string const & ASpell::getName(void) const {
    return (this->_name);
}

std::string const & ASpell::getEffects(void) const {
    return (this->_effects);
}

void ASpell::launch(ATarget const & target) const {
    target.getHitBySpell(*this);
}