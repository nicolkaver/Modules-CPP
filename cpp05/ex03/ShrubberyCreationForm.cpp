#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 145, 137, "Default") {
    std::cout << "Default constructor called for " << this->getName() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& name, 
    const std::string & target) : AForm(name, 145, 137, target) {
        std::cout << "Parametric constructor called for " << this->getName() << std::endl;
    }

ShrubberyCreationForm::ShrubberyCreationForm(
	const ShrubberyCreationForm& src) : AForm(src) {
        std::cout << "Copy constructor called for " << this->getName() << std::endl;
    }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
    std::cout << "Assignment copy operator called for " << this->getName() << std::endl;
	AForm::operator=(src);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Destructor called for " << this->getName() << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    checkToExecute(executor);
    std::string file = this->target + "_shrubbery";
    std::ofstream outfile;
    outfile.open(file.c_str(), std::fstream::out | std::fstream::app);
    if (!outfile.is_open())
        throw FileWontOpen();
outfile << \
"       .\n"
"    __/ \\__\n"
"    \\     /\n"
"    /.'o'.\\\n"
"     .o.'.\n"
"    .'.'o'.\n"
"   o'.o.'.o.\n"
"  .'.o.'.'.o.\n"
" .o.'.o.'.o.'.\n"
"    [_____]\n"
"     \\___/\n";
outfile.close();
}

std::ostream & operator<<( std::ostream & o, ShrubberyCreationForm const & rhs) {
    o << "Shrubbery creation form " << rhs.getName() << std::endl;
	return (o);
}