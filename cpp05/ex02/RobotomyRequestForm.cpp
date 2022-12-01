#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Unknown", 72, 45, "Unknown")
{
	std::cout << "Default constructor called for " << this->getName() << std::endl;
	std::srand(std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& name,
	const std::string& target) : AForm(name, 72, 45, target)
{
	std::cout << "Parametric constructor called for " << this->getName() << std::endl;
	std::srand(std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(
	const RobotomyRequestForm& src) : AForm(src)
{
	std::cout << "Copy constructor called for " << this->getName() << std::endl;
	std::srand(std::time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor called for " << this->getName() << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	std::cout << "Copy assignment operator called for " << this->getName() << std::endl;
	AForm::operator=(src);
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	checkToExecute(executor);
	if (std::rand() % 2 == 0)
		std::cout << GREEN << this->target << " has been successfully robotomized." << NC << std::endl;
	else
		std::cout << RED << "Robotomy failed." << NC << std::endl;
}

std::ostream & operator<<( std::ostream & o, RobotomyRequestForm const & rhs) {
	o << "Robotomy request form " << rhs.getName() << std::endl;
	return (o);
}