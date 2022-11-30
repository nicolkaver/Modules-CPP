#ifndef SHRUBBERY_CREATION_FORM
# define SHRUBBERY_CREATION_FORM

# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const &, std::string const &);
    ShrubberyCreationForm(ShrubberyCreationForm const &);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm & operator=(ShrubberyCreationForm const &);

    virtual void execute(const Bureaucrat& executor) const;

};

#endif