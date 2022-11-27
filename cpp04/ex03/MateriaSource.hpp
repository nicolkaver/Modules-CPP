#ifndef MATERIA_SOURCE
# define MATERIA_SOURCE

# include "IMateriaSource.hpp"

class MateriaSource
{
public:
    MateriaSource(void);
    MateriaSource(MateriaSource & src);
    ~MateriaSource(void);
    MateriaSource & operator=(MateriaSource & rhs);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
    AMateria* getInventory(int idx) const

private:AMateria* 

};

#endif