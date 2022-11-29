#include "Bureaucrat.hpp"

int main(void)
{
<<<<<<< HEAD
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

	std::cout << "The fourth bureaucrat Robin had his grade 150 incremented:" << std::endl;
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

	std::cout << "The fifth bureaucrat Maria had her grade 1 decremented:" << std::endl;
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
=======
    std::cout << "Trying the first bureaucrat :" << std::endl;
    try
    {
	    Bureaucrat andrew("Andrew", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << std::endl;

    std::cout << "Trying the second bureaucrat Adam:" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Adam", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}	
    std::cout << std::endl;

    std::cout << "Trying the third bureaucrat Henry with a grade 1 by incrementing his grade:" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Henry", 1);
		bureaucrat.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << std::endl;

    std::cout << "Trying the fourth bureaucrat Debra with a grade 150 and decrementing her grade:" << std::endl;
	try {
		Bureaucrat bureaucrat("Debra", 150);
		bureaucrat.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << std::endl;

    std::cout << "Trying the fifth bureaucrat Boris with a random grade 42:" << std::endl;
    try {
		Bureaucrat bureaucrat("Boris", 42);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
>>>>>>> eb844c78e7b191a547131f491443804cd10f63eb
