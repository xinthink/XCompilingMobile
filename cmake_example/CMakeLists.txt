cmake_minimum_required(VERSION 3.14)
project(cmake_example VERSION 1.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Create the static library
add_library(${PROJECT_NAME} STATIC
    src/example.cpp
)

# Set include directories for the library
target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# Create example executable
add_executable(${PROJECT_NAME}_example
    src/main.cpp
)

# Link example executable with the library
target_link_libraries(${PROJECT_NAME}_example
    PRIVATE
        ${PROJECT_NAME}
)

# Enable testing
enable_testing()
add_subdirectory(tests)

# Install rules
install(TARGETS ${PROJECT_NAME} ${PROJECT_NAME}_example
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

# Install headers
install(DIRECTORY include/
        DESTINATION include/${PROJECT_NAME}
        FILES_MATCHING PATTERN "*.h*")
