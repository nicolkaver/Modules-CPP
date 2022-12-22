#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title): _name(name), _title(title) {
    std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void) {
    std::cout << this->_name << ": My job is done here !" << std::endl;
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