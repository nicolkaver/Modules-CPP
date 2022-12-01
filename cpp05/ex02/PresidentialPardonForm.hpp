#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

# include "AForm.hpp"

# include <iostream>

class PresidentialPardonForm: public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string& name, const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& src);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& src);
	~PresidentialPardonForm();

	virtual void execute(const Bureaucrat& executor) const;
};

std::ostream & operator<<( std::ostream & o, PresidentialPardonForm const & rhs);

#endif