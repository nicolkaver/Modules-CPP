#include "Bureaucrat.hpp"

int main(void)
{
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