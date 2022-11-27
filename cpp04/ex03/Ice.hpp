#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice(void);
    Ice(std::string const & type);
    Ice(Ice const &);
    Ice & operator=(Ice const &);
    ~Ice(void);
    
    Ice* clone() const;
    void use(ICharacter& target);

protected:
    std::string type;
};

#endif