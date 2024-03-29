#include "Form.hpp"

Form::Form(void): _name("randomForm"), _gradeToSign(MIN_GRADE), _gradeToExecute(MIN_GRADE), _isSigned(false) {
	std::cout << "Default constuctor called for " << this->getName() << std::endl;
}

Form::Form(std::string const name, int const gradeToSign, int const gradeToExecute): _name(name),
	_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false) 
	{
    // this->_name = name;
    // this->_gradeToSign = gradeToSign;
    // this->_gradeToExecute = gradeToExecute;
	// this->_isSigned = false;
	if (this->_gradeToSign < MAX_GRADE || this->_gradeToExecute < MAX_GRADE)
		throw GradeTooHighException(); 
	if (this->_gradeToSign > MIN_GRADE || this->_gradeToExecute > MIN_GRADE)
		throw GradeTooLowException(); 
	std::cout << "Parametric constuctor called for " << this->getName() << std::endl;
}

Form::Form(Form const & src): _name(src._name), _gradeToSign(src._gradeToSign),
	_gradeToExecute(src._gradeToExecute), _isSigned(src._isSigned) {
	// const_cast<std::string&>(_name) = src._name;
	// const_cast<int&>(_gradeToSign) = src._gradeToSign;
	// const_cast<int&>(_gradeToExecute) = src._gradeToExecute;
	// _isSigned = src._isSigned;
	std::cout << "Copy constuctor called for " << this->getName() << std::endl;
}

Form::~Form(void) {
	std::cout << "Destructor called for " << this->getName() << std::endl;
}

Form & Form::operator=(Form const & rhs) {
	if (this == &rhs)
		return (*this);
	const_cast<std::string&>(_name) = rhs._name;
	const_cast<int&>(_gradeToSign) = rhs._gradeToSign;
	const_cast<int&>(_gradeToExecute) = rhs._gradeToExecute;
	_isSigned = rhs._isSigned;
	std::cout << "Copy assignment operator called for " << this->getName() << std::endl;
	return (*this);
}

void Form::beSigned(Bureaucrat & bureaucrat) {
    if (bureaucrat.getGrade() >= this->getGradeToSign())
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

std::ostream & operator<<( std::ostream & o, Form const & rhs) {
	o << "Form " << rhs.getName() << " is introduced." << std::endl;
	return (o);
}