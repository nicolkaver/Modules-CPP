#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "The numbers of the vector are : " << sp;
    std::cout << "The shortest span is : " << sp.shortestSpan() << std::endl;
    std::cout << "The longest span is : " << sp.longestSpan() << std::endl;
    std::cout << "Adding a sixth number to an array with a maximal capacity of 5 numbers:" << std::endl;
    try {
        sp.addNumber(2);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "***************************" << std::endl;
    std::cout << std::endl;

    std::cout << "Creating an array of 10000 numbers using push_back function:\n";
	try
	{
		std::vector<int> new_vec;
		Span sp = Span(10000);
		srand(time(NULL));
		for (int i = 0; i < 10000; i++)
		{
			int value = rand();
			new_vec.push_back(value);
		}
		sp.addNumber(new_vec.begin(), new_vec.end());
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
  	{
    	std::cerr << e.what() << std::endl;
  	}

	std::cout << "Longest span with one number:" << std::endl;
	try
	{
		Span sp = Span(7);
		sp.addNumber(42);
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (0);
}