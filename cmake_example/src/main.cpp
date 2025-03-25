#include <iostream>
#include "example.hpp"

int main(int argc, char* argv[]) {
    cmake_example::Greeter greeter;
    std::cout << greeter.get_greeting() << std::endl;
    return 0;
}
