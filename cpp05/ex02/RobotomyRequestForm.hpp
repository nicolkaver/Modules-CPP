#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "AForm.hpp"

#include <iostream>
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm: public AForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string& name, const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& src);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& src);
	~RobotomyRequestForm();

	virtual void execute(const Bureaucrat& executor) const;
};

std::ostream & operator<<( std::ostream & o, RobotomyRequestForm const & rhs);

#endif