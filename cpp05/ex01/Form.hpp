#ifndef FORM_HPP
# define FORM_HPP

# include <stdexcept>
# include <iostream>
# include "Bureaucrat.hpp"

# define MAX_GRADE 1
# define MIN_GRADE 150

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define BLUE "\033[1;34m"
# define NC "\033[0m"
# define CBLUE(x) BLUE x NC

class Bureaucrat;

class Form {
public:
    Form();
    Form(std::string const, bool, int const, int const);
    Form(Form const &);
    ~Form();
    Form & operator=(Form const &);

    void beSigned(Bureaucrat &);

    //ACCESSORS
    std::string const getName(void) const;
    bool getIsSigned(void) const;
    int getGradeToExecute(void) const;
    int getGradeToSign(void) const;


    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw();
    };

private:
    std::string const _name;
    bool _isSigned;
    int const _gradeToSign;
    int const _gradeToExecute;
};

std::ostream & operator<<( std::ostream & o, Form const & rhs);

#endif