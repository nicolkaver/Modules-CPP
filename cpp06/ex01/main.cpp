#include "data.hpp"

int main(int ac, char **av) {
    (void)av;
    if (ac > 1) {
        std::cout << "Please don't enter additional arguments." << std::endl;
        return (1);
    }
    Data data;
    data.str = "Hello !";
    data.num = 42;

    std::cout << "Before serialization: " << std::endl;
    std::cout << "String: " << data.str << std::endl;
    std::cout << "Number: " << data.num << std::endl;
    std::cout << std::endl;

    uintptr_t toSerialize = serialize(&data);
    Data* toDeserialize = deserialize(toSerialize);

    std::cout << "After serialization: " << std::endl;
    std::cout << "String: " << toDeserialize->str << std::endl;
    std::cout << "Number: " << toDeserialize->num << std::endl;

    return (0);
}