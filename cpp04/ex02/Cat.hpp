#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {
public:
    Cat(void);
    Cat(std::string);
    Cat(Cat const &);
    Cat & operator=(Cat const &);
    ~Cat(void);

    void makeSound() const;
    Brain* getBrain() const;

private:
    Brain* _brain;
};

#endif
