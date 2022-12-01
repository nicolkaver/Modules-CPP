#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

# define SHRUB 0
# define ROBO 1
# define PRES 2
# define NUM_FORMS 3

class AForm;

class Intern
{
public:
	Intern();
	Intern(const Intern& src);
	Intern& operator=(const Intern& rhs);
	~Intern();

	class FormDoesNotExistException : public std::exception
	{
		public:
				const char* what() const throw();
	};

	AForm* makeForm(const std::string formName, const std::string formTarget) const;	
};

std::ostream & operator<<( std::ostream & o, Intern const & rhs);

#endif