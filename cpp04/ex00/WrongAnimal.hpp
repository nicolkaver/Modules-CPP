#ifndef WRONG_WrongAnimal_HPP
# define WRONG_WrongAnimal_HPP

# include <iostream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define BLUE "\033[1;34m"
# define NC "\033[0m"

class WrongAnimal {
public:
    WrongAnimal(void);
    WrongAnimal(std::string);
    WrongAnimal(WrongAnimal const &);
    WrongAnimal & operator=(WrongAnimal const &);
    virtual ~WrongAnimal(void);

    void makeSound(void) const;
    std::string getType(void) const;

protected:
    std::string type;
};

#endif