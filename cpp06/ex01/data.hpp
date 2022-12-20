#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
# include <stdint.h>

struct Data {
    int num;
    std::string str;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif