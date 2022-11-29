#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <stdexcept>
# include <iostream>

# define MAX_GRADE 1
# define MIN_GRADE 150

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

    std::string const & getName(void) const;
    int getGrade(void) const;

private:
    std::string const _name;
    int _grade;
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs);

#endif