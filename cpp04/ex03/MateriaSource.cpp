#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {}

MateriaSource::MateriaSource(MateriaSource & src) {
    
}
    
MateriaSource::~MateriaSource(void) {}

MateriaSource & MateriaSource::operator=(MateriaSource & rhs);

void MateriaSource::learnMateria(AMateria*) {
    int i = 0;

    if (!m)
    {
        std::cout << RED << "No materia to learn !" << NC << std::endl;
        return;
    }
    while (getInventory(i) != 0 && i < 4)
        i++;
    if (i >= 4)
    {
        std::cout << RED << "You can only learn no more than 4 materia !" << NC << std::endl;
        return;
    }
    (this->_inventory)[i] = m;
	std::cout << GREEN << m->getType() << " materia learned." << NC << std::endl;
}
AMateria* createMateria(std::string const & type) {
    int i = 0;

	while ((this->_inventory)[i] && ((this->_inventory)[i])->getType() != type && i < 4)
		i++;
	if (i >= 4 || !(this->_inventory)[i])
	{
		std::cout << type << " materia does not exit\n";
		return (NULL);
	}
	std::cout << "Materia " << type << " created\n";
	return (((this->_inventory)[i])->clone());
}

AMateria* MateriaSource::getInventory(int idx) const {
    return (this->_inventory)[idx];
}