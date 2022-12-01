#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void): _name("Default"), _grade(MIN_GRADE) {
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

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src._name) {
	this->_grade = src._grade;
	std::cout << "Copy constuctor called for " << this->getName() << " with grade " << this->getGrade() << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Destructor called for " << this->getName() << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
	if (this == &rhs)
		return (*this);
	const_cast<std::string&>(_name) = rhs._name;
	this->_grade = rhs._grade;
	std::cout << "Copy assignment operator called for " << this->getName() << " with grade " << this->getGrade() << std::endl;
	return (*this);
}

void Bureaucrat::incrementGrade(void) {
    --this->_grade;
	std::cout << CBLUE("Grade has been incremented.") << std::endl;
    if (this->getGrade() < MAX_GRADE)
	    throw GradeTooHighException();
}

void Bureaucrat::decrementGrade(void) {
    ++this->_grade;
	std::cout << CBLUE("Grade has been decremented.") << std::endl;
    if (this->getGrade() > MIN_GRADE)
	    throw GradeTooLowException();
}

void Bureaucrat::signForm(Form & form) {
	try
	{
		form.beSigned(*this);
		std::cout << GREEN << this->getName() << " signed " << form.getName() << NC << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << RED << this->_name << " couldn’t sign " << form.getName() << ". " << e.what() << NC << std::endl;
	}	
}

std::string const & Bureaucrat::getName(void) const {
    return (this->_name);
}

int Bureaucrat::getGrade(void) const {
    return (this->_grade);
}

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
	return (o);
}
