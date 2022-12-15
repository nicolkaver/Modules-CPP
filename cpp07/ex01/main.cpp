#include "iter.hpp"



int main(void) {
    int array[] = {0, 1, 2, 3};
    std::string string[] = {"This", "is", "a", "template"};
    std::cout << CGREEN("Printing the array:") << std::endl;
    ::iter<int>(array, 4, print);
    std::cout << std::endl;
    std::cout << CGREEN("Printing the string") << std::endl;
    ::iter<std::string>(string, 4, print);
    return (0);
}