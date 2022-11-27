#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure(void);
    Cure(std::string const & type);
    Cure(Cure const &);
    Cure & operator=(Cure const &);
    ~Cure(void);
    
    Cure* clone() const;
    void use(ICharacter& target);

protected:
    std::string type;
};

#endif