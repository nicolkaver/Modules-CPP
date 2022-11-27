#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public AAnimal {
public:
    Dog(void);
    Dog(std::string);
    Dog(Dog const &);
    Dog & operator=(Dog const &);
    ~Dog(void);

    void makeSound() const;
};

#endif