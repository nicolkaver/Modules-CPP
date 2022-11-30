#include "Form.hpp"

Form::Form(void): _name("form_random"), _isSigned(false), _gradeToSign(MIN_GRADE), _gradeToExecute(MIN_GRADE) {
	std::cout << "Default constuctor called for " << this->getName() << " with grade " << this->getGrade() << std::endl;
}

Form::Form(std::string const name, const int gradeToSign, const int gradeToExecute) {
    this->_name = name;
    this->_isSigned = false;
    this->_gradeToSign = gradeToSign;
    this->_gradeToExecute = gradeToExecute;
	std::cout << "Parametric constuctor called for " << this->getName() << " with grade " << this->getGrade() << std::endl;
}

Form::Form(Form const & src) {
	this->_grade = src._grade;
	std::cout << "Copy constuctor called for " << this->getName() << " with grade " << this->getGrade() << std::endl;
}

Form::~Form(void) {}

Form & Form::operator=(Form const & rhs) {
	if (this == &rhs)
		return (*this);
	this->_grade = rhs._grade;
	std::cout << "Copy assignment operator called for " << this->getName() << " with grade " << this->getGrade() << std::endl;
	return (*this);
}

void beSigned(Bureaucrat & bureaucrat) {
    if (bureaucrat.getGrade() >= this->_getGradeToSign())
        throw GradeTooLowException();
}


//EXCEPTIONS
const char* Form::GradeTooHighException::what() const throw()
{
	return ("Error: grade too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Error: grade too low!");
}

//ACCESSORS
std::string const Form::getName(void) const {
    return (this->_name);
}

bool Form::getIsSigned(void) const {
    return (this->_isSigned);
}

int Form::getGradeToExecute(void) const {
    return (this->_gradeToExecute);
}

int Form::getGradeToSign(void) const {
    return (this->_gradeToSign);
}