#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	//AN ALTERNATIVE :
	//AMateria* ice = new Ice;
	//AMateria* cure = new Cure;
	//src->learnMateria(ice);
	//src->learnMateria(cure);

	std::cout << "We start by learning the two major materia ice and cure:" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;

	ICharacter* yuna = new Character("Yuna");
	AMateria* tmp;

	std::cout << "First we create a materia ice:" << std::endl;
	tmp = src->createMateria("ice");
	yuna->equip(tmp);
	std::cout << std::endl;
	
	std::cout << "Then we create a materia cure:" << std::endl;
	tmp = src->createMateria("cure");
	yuna->equip(tmp);
	std::cout << std::endl;

	std::cout << "Then we try to create a materia that does not exist in the nature:" << std::endl;
	tmp = src->createMateria(NULL);
	yuna->equip(tmp);
	std::cout << std::endl;
	
	ICharacter* zack = new Character("Zack Fair");
	std::cout << "Yuna uses materia at index 0:" << std::endl;
	yuna->use(0, *zack);
	std::cout << "Yuna uses materia at index 1:" << std::endl;
	yuna->use(1, *zack);
	std::cout << "Yuna tries to use materia at index that does not exist:" << std::endl;
	yuna->use(2, *zack);

	delete zack;
	delete yuna;
	delete src;
	return 0;
}
