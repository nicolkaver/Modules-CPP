#include "Intern.hpp"

Intern::Intern(void) {
    std::cout << "Default constructor called for Intern." << std::endl;
}

//Nothing to copy or assign because Intern has no attributes
Intern::Intern(const Intern & src) {
    (void)src;
    std::cout << "Copy constructor called for Intern." << std::endl;
}

Intern & Intern::operator=(const Intern& rhs) {
    (void)rhs;
    std::cout << "Copy assignment operator called for Intern." << std::endl;
    return (*this);
}

Intern::~Intern() {
    std::cout << "Destructor called for Intern." << std::endl;
}

const char* Intern::FormDoesNotExistException::what() const throw()
{
	return ("Error: form does not exist!");
}

AForm* Intern::makeForm(const std::string formName, const std::string formTarget) const {
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    int choice = -1;
    AForm* ret = NULL;
    for (int i = 0; i < NUM_FORMS; i++)
    {
        if(!formName.compare(forms[i]))
            choice = i;
    }
    switch (choice) {
        case SHRUB:
            ret = new ShrubberyCreationForm(formName, formTarget);
            std::cout << GREEN << "Intern creates " << forms[choice] << "." << NC << std::endl;
            return (ret);
        case ROBO:
            ret = new RobotomyRequestForm(formName, formTarget);
            std::cout << GREEN << "Intern creates " << forms[choice] << "." << NC << std::endl;
            return (ret);
        case PRES:
            ret = new PresidentialPardonForm(formName, formTarget);
            std::cout << GREEN << "Intern creates " << forms[choice] << "." << NC << std::endl;
            return (ret);
        default:
            throw FormDoesNotExistException();
    };
    return (ret);
}

std::ostream & operator<<( std::ostream & o, Intern const & rhs) {
    (void)rhs;
    o << "This intern is kind of dummy because he has no attributes." << std::endl;
	return (o);
}