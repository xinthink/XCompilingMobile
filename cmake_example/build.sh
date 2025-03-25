#!/bin/bash

# Exit on any error
set -e

# Print commands before executing
set -x

# Create build directory if not exists
mkdir -p build
cd build

# Clean previous build
rm -rf *

# Configure project with CMake
cmake ..

# Build the project
cmake --build .

# Run tests
ctest --output-on-failure

echo "Build and test completed successfully!"
