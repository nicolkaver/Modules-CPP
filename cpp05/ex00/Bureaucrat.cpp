#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) _name("Default"), _grade(MIN_GRADE) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    if (grade < MAX_GRADE)
        throw GradeTooHighException();
    else if (grade > MIN_GRADE)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
    this->_grade = src._grade;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
    if (this == &rhs)
        return (*this);
    this->_grade = rhs.grade;
    return (*this);
}

void Bureaucrat::incrementGrade(void) {
    this->_grade++;

}

void Bureaucrat::decrementGrade(void) {
    this->_grade--;
}

std::string const & Bureaucrat::getName(void) const {
    return (this->_name);
}

int Bureaucrat::getGrade(void) const {
    return (this->_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.toFloat();
	return (o);
}