#include "data.hpp"

int main(void) {
    Data data;
    data.str = "Hello !";
    data.num = 42;

    std::cout << "Before serialization: " << std::endl;
    std::cout << "String: " << data.str << std::endl;
    std::cout << "Number: " << data.num << std::endl;
    std::cout << std::endl;

    uintptr_t toSerialize = serialize(&data);
    Data *toDeserialize = deserialize(toSerialize);

    std::cout << "After serialization: " << std::endl;
    std::cout << "String: " << toDeserialize->str << std::endl;
    std::cout << "Number: " << toDeserialize->num << std::endl;

    return (0);
}