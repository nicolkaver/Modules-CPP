#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    //const AAnimal* animal = new AAnimal(); = this would show a mistake
    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();

    std::cout << std::endl << GREEN << "DOG TYPE: " << dog->getType() << std::endl;
    std::cout << "CAT TYPE: " <<cat->getType() << std::endl;

    dog->makeSound();
    cat->makeSound();
    std::cout << NC << std::endl;

    //delete animal;
    delete cat;
    delete dog;

    return (0);
}