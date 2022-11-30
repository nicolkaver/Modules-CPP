#include "AForm.hpp"

AForm::AForm(void): target("Unknown"), _name("randomAForm"), _gradeToSign(MIN_GRADE), _gradeToExecute(MIN_GRADE), _isSigned(false) {
	std::cout << "Default constuctor called for AForm." << std::endl;
}

AForm::AForm(std::string const name, int const gradeToSign, int const gradeToExecute, std::string const target): target(target), _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false)
{
	if (this->_gradeToSign < MAX_GRADE || this->_gradeToExecute < MAX_GRADE)
		throw GradeTooHighException(); 
	if (this->_gradeToSign > MIN_GRADE || this->_gradeToExecute > MIN_GRADE)
		throw GradeTooLowException(); 
	std::cout << "Parametric constuctor called for AForm." << std::endl;
}

AForm::AForm(const int gradeToSign, const int gradeToExecute) :
	_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (this->_gradeToSign < MAX_GRADE || this->_gradeToExecute < MAX_GRADE)
		throw GradeTooHighException(); 
	if (this->_gradeToSign > MIN_GRADE || this->_gradeToExecute > MIN_GRADE)
		throw GradeTooLowException(); 
}

AForm::AForm(AForm const & src): _name(src._name), _gradeToSign(src._gradeToSign),
	_gradeToExecute(src._gradeToExecute), _isSigned(src._isSigned) {
	std::cout << "Copy constuctor called for AForm." << std::endl;
}

AForm::~AForm(void) {
	std::cout << "Destructor called for AForm." << std::endl;
}

AForm & AForm::operator=(AForm const & rhs) {
	if (this == &rhs)
		return (*this);
	const_cast<std::string&>(_name) = rhs._name;
	const_cast<int&>(_gradeToSign) = rhs._gradeToSign;
	const_cast<int&>(_gradeToExecute) = rhs._gradeToExecute;
	_isSigned = rhs._isSigned;
	std::cout << "Copy assignment operator called for " << this->getName() << std::endl;
	return (*this);
}

void AForm::beSigned(Bureaucrat & bureaucrat) {
    if (bureaucrat.getGrade() >= this->getGradeToSign())
        throw GradeTooLowException();
	else
		this->_isSigned = true;
}

void AForm::checkToExecute(const Bureaucrat& executor) const
{
	if (this->_isSigned == false)
		throw FormNotSignedException();
	if (executor.getGrade() >= this->_gradeToExecute)
		throw GradeTooLowException();
}

//EXCEPTIONS
const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Error: grade too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Error: grade too low!");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Error: form not signed !");
}

const char* AForm::FileWontOpen::what() const throw()
{
	return ("Error: Something went wrong while opening your file!");
}

//ACCESSORS
std::string const AForm::getName(void) const {
    return (this->_name);
}

bool AForm::getIsSigned(void) const {
    return (this->_isSigned);
}

int AForm::getGradeToExecute(void) const {
    return (this->_gradeToExecute);
}

int AForm::getGradeToSign(void) const {
    return (this->_gradeToSign);
}

std::ostream & operator<<( std::ostream & o, AForm const & rhs) {
	o << rhs.getName() << " is introduced." << std::endl;
	return (o);
}