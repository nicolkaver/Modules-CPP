#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Default"), _grade(MIN_GRADE) {
<<<<<<< HEAD
	std::cout << "Default constuctor called for " << this->getName() << " with grade " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade) {
	if (grade < MAX_GRADE)
		throw GradeTooHighException();
	else if (grade > MIN_GRADE)
		throw GradeTooLowException();
	else
		std::cout << "Parametric constuctor called for " << this->getName() << " with grade " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
	this->_grade = src._grade;
	std::cout << "Copy constuctor called for " << this->getName() << " with grade " << this->getGrade() << std::endl;
=======
    std::cout << "Default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name) {
    if (grade < MAX_GRADE)
        throw GradeTooHighException();
    else if (grade > MIN_GRADE)
        throw GradeTooLowException();
    else {
        this->_grade = grade;
        std::cout << "Parametric constuctor called for Bureaucrat " << this->getName() << " with a grade " << this->getGrade() << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src._name + "_copy") {
    this->_grade = src.getGrade();
    std::cout << "Parametric constuctor called for Bureaucrat " << this->getName() << " with a grade " << this->getGrade() << std::endl;
>>>>>>> eb844c78e7b191a547131f491443804cd10f63eb
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << "Destructor called for Bureaucrat " << this->getName() << " with a grade " << this->getGrade() << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
<<<<<<< HEAD
	if (this == &rhs)
		return (*this);
	this->_grade = rhs._grade;
	std::cout << "Copy assignment operator called for " << this->getName() << " with grade " << this->getGrade() << std::endl;
	return (*this);
}

void Bureaucrat::incrementGrade(void) {
    	if (this->getGrade() == MAX_GRADE)
		throw GradeTooHighException();
	--this->_grade;
}

void Bureaucrat::decrementGrade(void) {
    if (this->getGrade() == MIN_GRADE)
	throw GradeTooLowException();
    ++this->_grade;
=======
    if (this == &rhs)
        return (*this);
    const_cast<std::string&>(_name) = rhs._name;
    this->_grade = rhs._grade;
    return (*this);
}

void Bureaucrat::incrementGrade(void) { 
    if (this->_grade == MAX_GRADE)
	    throw GradeTooHighException();
    ++this->_grade;

}

void Bureaucrat::decrementGrade(void) {
    if (this->_grade == MIN_GRADE)
	    throw GradeTooHighException();
    --this->_grade;
>>>>>>> eb844c78e7b191a547131f491443804cd10f63eb
}

std::string const & Bureaucrat::getName(void) const {
    return (this->_name);
}

int Bureaucrat::getGrade(void) const {
    return (this->_grade);
}

<<<<<<< HEAD
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: grade too low!");
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
=======
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Error: Grade too high !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Error: Grade too low !");
}

std::ostream & operator<<(std::ostream & o, const Bureaucrat & obj)
{
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade();
>>>>>>> eb844c78e7b191a547131f491443804cd10f63eb
	return (o);
}
