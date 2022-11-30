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

AForm* Intern::_makeShrubbery(const std::string formName, const std::string formTarget) const {
    AForm* shrubbery = new ShrubberyCreationForm(formName, formTarget);
    std::cout << GREEN << "Intern creates " << formName << " for " << formTarget << NC << std::endl;
    return (shrubbery);
}

AForm* Intern::_makeRobotomy(const std::string formName, const std::string formTarget) const {
    AForm* robotomy = new RobotomyRequestForm(formName, formTarget);
    return (robotomy);
}

AForm* Intern::_makePresidential(const std::string formName, const std::string formTarget) const {
    AForm* presidential = new PresidentialPardonForm(formName, formTarget);
    return (presidential);
}

AForm* Intern::makeForm(const std::string formName, const std::string formTarget) const {
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    int choice = -1;
    for (int i = 0; i < NUM_FORMS; i++)
    {
        if(!formName.compare(forms[i]))
            choice = i;
    }
    switch (choice) {
        case SHRUB:
            std::cout << GREEN << "Intern creates " << forms[choice] << "." << NC << std::endl;
            return(_makeShrubbery(formName, formTarget));
        case ROBO:
            std::cout << GREEN << "Intern creates " << forms[choice] << "." << NC << std::endl;
            return(_makeRobotomy(formName, formTarget));
        case PRES:
            std::cout << GREEN << "Intern creates " << forms[choice] << "." << NC << std::endl;
            return(_makePresidential(formName, formTarget));
        default:
            throw FormDoesNotExistException();
    };
    return (NULL);
}