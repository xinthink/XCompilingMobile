#include <iostream>
#include "example.hpp"

bool run_tests() {
    bool test_passed = true;

    // Test Greeter class
    cmake_example::Greeter greeter;
    std::string expected_greeting = "Hello from CMake example!";
    std::string actual_greeting = greeter.get_greeting();

    if (actual_greeting == expected_greeting) {
        std::cout << "Greeter test passed" << std::endl;
    } else {
        std::cout << "Greeter test failed" << std::endl;
        test_passed = false;
    }

    return test_passed;
}

int main() {
    bool all_tests_passed = run_tests();
    std::cout << "\nTest summary: " << (all_tests_passed ? "All tests passed" : "Some tests failed") << std::endl;
    return all_tests_passed ? 0 : 1;
}
