#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>

# include "AAnimal.hpp"

class Cat : public AAnimal {
public:
    Cat(void);
    Cat(std::string);
    Cat(Cat const &);
    Cat & operator=(Cat const &);
    ~Cat(void);

    void makeSound() const;
};

#endif