#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>

# include "Animal.hpp"

class Cat : public Animal {
public:
    Cat(void);
    Cat(std::string);
    Cat(Cat const &);
    Cat & operator=(Cat const &);
    ~Cat(void);

    void makeSound() const;
};

#endif