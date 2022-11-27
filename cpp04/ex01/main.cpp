#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define NUM_ANIM 4

int main(void)
{
    std::cout << GREEN << "Test for the subject's main:" << NC << std::endl;
    Animal *j = new Dog();
    Animal *i = new Cat();
    j->makeSound();
    i->makeSound();
    delete j;
    delete i;
    std::cout << GREEN << "Tests' end." << NC << std::endl;
    std::cout << std::endl;

    std::cout << GREEN << "CREATION:" << NC << std::endl;
    const Animal *animals[NUM_ANIM];
    for (int i = 0; i < NUM_ANIM / 2; i++)
        animals[i] = new Dog();
    for (int i = NUM_ANIM / 2; i < NUM_ANIM; i++)
        animals[i] = new Cat();
    for (int i = 0; i < NUM_ANIM; i++)
        animals[i]->makeSound();
    std::cout << GREEN << "DELETION:" << NC << std::endl;
    for (int i = 0; i < NUM_ANIM; i++)
        delete animals[i];

    std::cout << std::endl;
    std::cout << GREEN << "Tests for BRAIN:" << NC << std::endl;
    Cat cat1;
    Cat cat2;

    cat1.getBrain()->ideas[0] = "I want more food.";
    cat2.getBrain()->ideas[0] = "I want more hugs.";

    std::cout << GREEN << "FIRST IDEA OF CAT1: " << cat1.getBrain()->ideas[0] << NC << std::endl;
    std::cout << GREEN << "FIRST IDEA OF CAT2: " << cat2.getBrain()->ideas[0] << NC << std::endl;
    std::cout << std::endl;

    std::cout << GREEN << "AND NOW USING ASSIGNMENT OPERATOR:" << NC << std::endl;
    cat1 = cat2;

    std::cout << GREEN << "FIRST IDEA OF CAT1: " << cat1.getBrain()->ideas[0] << NC << std::endl;
    std::cout << GREEN << "FIRST IDEA OF CAT2: " << cat2.getBrain()->ideas[0] << NC << std::endl;
    std::cout << std::endl;

    return (0);
}