#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << BOLD << "The first bureaucrat Alison with grade 42:" << NC << std::endl;
	try
	{
		Bureaucrat bureaucrat("Alison", 42);
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}
	std::cout << std::endl;

	std::cout << BOLD << "The second bureaucrat Michael with grade 151:" << NC << std::endl;
	try
	{
		Bureaucrat bureaucrat("Michael", 151);
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}
	std::cout << std::endl;

	std::cout << BOLD << "The third bureaucrat Alice with grade 0:" << NC << std::endl;
	try
	{
		Bureaucrat bureaucrat("Alice", 0);
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}
	std::cout << std::endl;

	std::cout << BOLD << "The fourth bureaucrat Robin had his grade 1 incremented:" << NC << std::endl;
	try
	{
		Bureaucrat bureaucrat("Robin", 1);
		bureaucrat.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}
	std::cout << std::endl;

	std::cout << BOLD << "The fifth bureaucrat Maria had her grade 150 decremented:" << NC << std::endl;
	try {
		Bureaucrat bureaucrat("Maria", 150);
		bureaucrat.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}
	return (0);
}
