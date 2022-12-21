#include "easyfind.hpp"

int main(void) {

	int len = 10;

	std::vector<int> intVector(len);

    std::cout << "Vector's elements:" << std::endl;
	for (int i = 0; i < len; i++)
	{
		intVector[i] = i * 3;
		std::cout << intVector[i] << " "; 
	}
	std::cout << std::endl << std::endl;
	
	std::cout << "Is 15 in this container ?" << std::endl;
    try
	{
		easyfind(intVector, 15);	
	}
	catch (std::exception & e)
	{
		std::cerr << "The number is not in this container\n";	
	}

	std::cout << "Is 42 in this container?" << std::endl;
	try
	{
		easyfind(intVector, 42);	
	}
	catch (std::exception & e)
	{
		std::cerr << "The number is not in this container\n";	
	}

	return (0);
}
