#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget {
public:
    ATarget();
    ATarget(std::string const &);
    ATarget(ATarget const &);
    virtual ~ATarget();
    ATarget & operator=(ATarget const &);

    std::string const & getType() const;
    void getHitBySpell(ASpell const &) const;

    virtual ATarget* clone() const = 0;

protected:
    std::string _type;
};

#endif