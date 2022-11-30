#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main(void)
{
	std::cout << "First we try a bureaucrat with a grade that is too low: " << std::endl;
	try
	{
		Bureaucrat bureaucrat("Hank", 155);
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat bureaucrat("Boris", 42);
		std::cout << bureaucrat << std::endl;;
		AForm AForm1("AForm1", 50, 42);
		AForm AForm2("AForm2", 40, 42);
		AForm AForm3("AForm3", 60, 40); // For the moment we are not testing gradeToExecute
		std::cout << AForm1 << AForm2 << AForm3 << std::endl;
		bureaucrat.signAForm(AForm1);
		bureaucrat.signAForm(AForm2);
		bureaucrat.signAForm(AForm3);
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}

	return (0);
}