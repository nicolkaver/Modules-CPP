#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Unknown", 25, 5, "Unknown")
{
	std::cout << "Default constructor called for " << this->getName() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& name,
	const std::string& target) : AForm(name, 25, 5, target)
{
	std::cout << "Parametric constructor called for " << this->getName() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(
	const PresidentialPardonForm& src) : AForm(src)
{
	std::cout << "Copy constructor called for " << this->getName() << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor called for " << this->getName() << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	std::cout << "Copy assignment operator called for " << this->getName() << std::endl;
	AForm::operator=(src);
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	checkToExecute(executor);
	std::cout << GREEN << this->target << " has been pardoned by Zaphod Beeblebrox." << NC << std::endl;
}

std::ostream & operator<<( std::ostream & o, PresidentialPardonForm const & rhs) {
    o << "Presidential pardon form " << rhs.getName() << std::endl;
	return (o);
}