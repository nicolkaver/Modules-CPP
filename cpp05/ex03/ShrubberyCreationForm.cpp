#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 145, 137, "Default") {
    std::cout << "Default constructor called for ShrubberyCreationForm." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& name, 
    const std::string & target) : AForm(name, 145, 137, target) {
        std::cout << "Parametric constructor called for ShrubberyCreationForm." << std::endl;
    }

ShrubberyCreationForm::ShrubberyCreationForm(
	const ShrubberyCreationForm& src) : AForm(src) {
        std::cout << "Copy constructor called for ShrubberyCreationForm." << std::endl;
    }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
    std::cout << "Assignment copy operator called for ShrubberyCreationForm." << std::endl;
	AForm::operator=(src);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Destructor called for ShrubberyCreationForm." << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    checkToExecute(executor);
    std::string file = this->target + "_shrubbery";
    std::ofstream outfile;
    outfile.open(file.c_str(), std::fstream::out | std::fstream::trunc);
    if (!outfile.is_open())
        throw FileWontOpen();
outfile << \
"      	                                             .\n"
"                                    .         ;\n"
"       .              .              ;%     ;;\n"
"         ,           ,                :;%  %;\n"
"          :         ;                   :;%;'     .,\n"
" ,.        %;     %;            ;        %;'    ,;\n"
"   ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
"    %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
"     ;%;      %;        ;%;        % ;%;  ,%;'\n"
"      `%;.     ;%;     %;'         `;%%;.%;'\n"
"       `:;%.    ;%%. %@;        %; ;@%;%'\n"
"          `:%;.  :;bd%;          %;@%;'\n"
"            `@%:.  :;%.         ;@@%;'\n"
"              `@%.  `;@%.      ;@@%;\n"
"                `@%%. `@%%    ;@@%;\n"
"                  ;@%. :@%%  %@@%;\n"
"                    %@bd%%%bd%%:;\n"
"                      #@%%%%%:;;\n"
"                      %@@%%%::;\n"
"                      %@@@%(o);  . '\n"
"                      %@@@o%;:(.,'\n"
"                  `.. %@@@o%::;\n"
"                     `)@@@o%::;\n"
"                      %@@(o)::;\n"
"                     .%@@@@%::;\n"
"                     ;%@@@@%::;.\n"
"                    ;%@@@@%%:;;;.\n"
"                ...;%@@@@@%%:;;;;,..\n";
outfile.close();
}