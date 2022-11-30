#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "The first bureaucrat Alison with grade 42:" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Alison", 42);
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}
	std::cout << std::endl;

	std::cout << "The second bureaucrat Michael with grade 151:" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Michael", 151);
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}
	std::cout << std::endl;

	std::cout << "The third bureaucrat Alice with grade 0:" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Alice", 0);
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}
	std::cout << std::endl;

	std::cout << "The fourth bureaucrat Robin had his grade 1 incremented:" << std::endl;
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

	std::cout << "The fifth bureaucrat Maria had her grade 150 decremented:" << std::endl;
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
