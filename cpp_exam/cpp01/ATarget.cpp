#include "ATarget.hpp"

ATarget::ATarget(void) {}

ATarget::ATarget(std::string const & type): _type(type) {}

ATarget::ATarget(ATarget const & src) { *this = src;}

ATarget::~ATarget(void) {}

ATarget & ATarget::operator=(ATarget const & rhs) {
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

std::string const & ATarget::getType(void) const {
    return (this->_type);
}

void ATarget::getHitBySpell(ASpell const & spell) const {
    std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}