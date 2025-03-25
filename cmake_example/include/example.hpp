#pragma once

#include <string>

namespace cmake_example {

// Simple class to demonstrate header organization
class Greeter {
public:
    Greeter() = default;
    ~Greeter() = default;

    std::string get_greeting() const;
};

} // namespace cmake_example
