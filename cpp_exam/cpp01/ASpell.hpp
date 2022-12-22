#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell {
public: 
    ASpell();
    ASpell(std::string const &, std::string const &);
    ASpell(ASpell const &);
    virtual ~ASpell();
    ASpell & operator=(ASpell const &);

    std::string const & getName() const;
    std::string const & getEffects() const;
    void launch(ATarget const &) const;

    virtual ASpell* clone() const = 0;

protected:
    std::string _name;
    std::string _effects;
};

#endif