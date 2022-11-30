#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <stdexcept>
# include <iostream>
<<<<<<< HEAD
# include "Form.hpp"
=======
>>>>>>> eb844c78e7b191a547131f491443804cd10f63eb

# define MAX_GRADE 1
# define MIN_GRADE 150

<<<<<<< HEAD
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define BLUE "\033[1;34m"
# define NC "\033[0m"
# define CBLUE(x) BLUE x NC

=======
>>>>>>> eb844c78e7b191a547131f491443804cd10f63eb
class Bureaucrat {
public:
    Bureaucrat();
    Bureaucrat(std::string const, int);
    Bureaucrat(Bureaucrat const &);
    ~Bureaucrat();
    Bureaucrat & operator=(Bureaucrat const &);

    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw();
    };

    void incrementGrade();
    void decrementGrade();
<<<<<<< HEAD
    void signForm();
=======
>>>>>>> eb844c78e7b191a547131f491443804cd10f63eb

    std::string const & getName(void) const;
    int getGrade(void) const;

private:
    std::string const _name;
    int _grade;
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs);

<<<<<<< HEAD
#endif
=======
#endif
>>>>>>> eb844c78e7b191a547131f491443804cd10f63eb
