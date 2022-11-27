#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main(void)
{
const Animal* animal = new Animal();
const Animal* dog = new Dog();
const Animal* cat = new Cat();

std::cout << GREEN << "DOG TYPE: " << dog->getType() << std::endl;
std::cout << "CAT TYPE: " <<cat->getType() << std::endl;

dog->makeSound();
cat->makeSound();
animal->makeSound();

std::cout << "**********************" << std::endl;
std::cout << std::endl;

WrongAnimal *wrongAnimal = new WrongAnimal();
WrongAnimal *wrongCat = new WrongCat();

std::cout << RED << wrongCat->getType() << std::endl;
std::cout << wrongAnimal->getType() << NC << std::endl;

wrongAnimal->makeSound();
wrongCat->makeSound();
std::cout << std::endl;

delete animal;
delete dog;
delete cat;
delete wrongAnimal;
delete wrongCat;

return (0);
}