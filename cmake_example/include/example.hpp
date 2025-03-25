#pragma once

#include <string>

namespace cmake_example {

// Simple class to demonstrate header organization
class Greeter {
public:
    Greeter() = default;
    ~Greeter() = default;

    std::string get_greeting() const {
        return "Hello from CMake example!";
    }
};

} // namespace cmake_example
