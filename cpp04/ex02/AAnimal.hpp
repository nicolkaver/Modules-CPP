#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define BLUE "\033[1;34m"
# define NC "\033[0m"

class AAnimal {
public:
    AAnimal(void);
    AAnimal(std::string);
    AAnimal(AAnimal const &);
    AAnimal & operator=(AAnimal const &);
    virtual ~AAnimal(void);

    virtual void makeSound(void) const = 0;
    std::string getType(void) const;

protected:
    std::string type;
};

#endif