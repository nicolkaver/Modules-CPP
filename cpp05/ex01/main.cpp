#include "Bureaucrat.hpp"
#include "Form.hpp"

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
		Form form1("form1", 50, 42);
		Form form2("form2", 40, 42);
		Form form3("form3", 60, 40); // For the moment we are not testing gradeToExecute
		std::cout << form1 << form2 << form3 << std::endl;
		bureaucrat.signForm(form1);
		bureaucrat.signForm(form2);
		bureaucrat.signForm(form3);
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}

	return (0);
}