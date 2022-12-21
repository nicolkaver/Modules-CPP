#include "Array.hpp"
#include <string>

int main(void)
{
    Array<float> arrOfFloats(10);
    int size = arrOfFloats.getArrSize();
    for (int i = 0; i < size; ++i)
        arrOfFloats[i] = static_cast<float>(i) * 3;
    std::cout << "Printing arrOfFloats:" << std::endl;
    std::cout << arrOfFloats << std::endl << std::endl;

    std::cout << "Printing arr2:" << std::endl;
    Array<float> arr2 = arrOfFloats;
    std::cout << arr2 << std::endl << std::endl;

    Array<std::string> arrOfStrings(4);
    arrOfStrings[0] = "This";
    arrOfStrings[1] = " is";
    arrOfStrings[2] = " a";
    arrOfStrings[3] = " template";
    std::cout << "Printing arrOfStrings:" << std::endl;
    std::cout << arrOfStrings << std::endl;

    std::cout << "Printing an index that is too high:" << std::endl;
	try
	{
        arrOfStrings[22] = " 42";
    }
	catch (std::exception &e)
	{
        std::cout << CRED("Error : Index out of range") << std::endl;
    }

    std::cout << "Printing an index of an empty array:" << std::endl;
	Array<int> arrOfInt;
    try
	{
        arrOfInt[0] = 10;
    }
	catch (std::exception &e)
	{
        std::cout << CRED("Error: Index out of range") << std::endl;
    }

    return (0);
}

// #include <iostream>
// #include <stdlib.h>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }

//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
