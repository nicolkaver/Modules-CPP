#ifndef WRONG_WrongCat_HPP
# define WRONG_WrongCat_HPP

# include <iostream>

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat(void);
    WrongCat(std::string);
    WrongCat(WrongCat const &);
    WrongCat & operator=(WrongCat const &);
    ~WrongCat(void);

    void makeSound() const;
};

#endif