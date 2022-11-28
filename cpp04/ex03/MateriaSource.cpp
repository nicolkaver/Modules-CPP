#include "MateriaSource.hpp"
#include "Character.hpp"

MateriaSource::MateriaSource(void) {
    for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
}

MateriaSource::MateriaSource(MateriaSource & src) {
    for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = (src._inventory[i])->clone();
	}
}
    
MateriaSource::~MateriaSource(void) {
    for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource & rhs) {
    for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (rhs._inventory[i])
			this->_inventory[i] = (rhs._inventory[i])->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
	int i = 0;

	while ((this->_inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << RED << "Character can only learn 4 materia !" << std::endl;
		return ;
	}
	(this->_inventory)[i] = m;
	std::cout << GREEN << "Materia " << m->getType() << " learned" << NC << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    	int i = 0;

	while ((this->_inventory)[i] && ((this->_inventory)[i])->getType() != type && i < 4)
		i++;
	if (i >= 4 || !(this->_inventory)[i])
	{
		std::cout << RED << type << " materia does not exit" << NC << std::endl;
		return (NULL);
	}
	std::cout << GREEN << "Materia " << type << " created" << NC << std::endl;
	return (((this->_inventory)[i])->clone());
}

/*AMateria* MateriaSource::getInventory(int idx) const {
    return (this->_inventory)[idx];
}*/
