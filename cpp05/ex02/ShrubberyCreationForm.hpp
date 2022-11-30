#ifndef SHRUBBERY_CREATION_FORM
# define SHRUBBERY_CREATION_FORM

# include "ShrubberyCreationForm.hpp"

class ShrubberyCreationForm : public AForm {
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const, int const, int const);
    ShrubberyCreationForm(ShrubberyCreationForm const &);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm & operator=(ShrubberyCreationForm const &);