#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someRandomIntern;
	AForm* rrf;
	AForm* scf;
	AForm* ppf;
	AForm* nef;
	try
	{
		std::cout << std::endl << CBLUE("Intern tries to create a shrubbery creation form:") << std::endl;
		scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << std::endl << CBLUE("Intern tries to create a robotomy request form:") << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << std::endl << CBLUE("Intern tries to create a presidential pardon form:") << std::endl;
		ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << std::endl << CBLUE("Intern tries to create a get promotion form:") << std::endl;
		nef = someRandomIntern.makeForm("get promotion", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << NC << std::endl;
	}
	
	if (scf)
		delete scf;
	if (rrf)
		delete rrf;
	if (ppf)
		delete ppf;
	return (0);
}