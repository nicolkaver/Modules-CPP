#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
public:
    Dog(void);
    Dog(std::string);
    Dog(Dog const &);
    Dog & operator=(Dog const &);
    ~Dog(void);

    void makeSound() const;
};

#endif