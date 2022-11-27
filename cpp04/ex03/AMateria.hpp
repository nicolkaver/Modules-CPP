#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define BLUE "\033[1;34m"
# define NC "\033[0m"

class AMateria
{
public:
    AMateria(void);
    AMateria(std::string const & type);
    AMateria(AMateria const &);
    AMateria & operator=(AMateria const &);
    ~AMateria(void);
    
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

protected:
    std::string type;
};

#endif