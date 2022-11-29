#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {
public:
    Dog(void);
    Dog(std::string);
    Dog(Dog const &);
    Dog & operator=(Dog const &);
    ~Dog(void);

    void makeSound() const;
    Brain* getBrain() const;

private:
    Brain* _brain;
};

#endif
