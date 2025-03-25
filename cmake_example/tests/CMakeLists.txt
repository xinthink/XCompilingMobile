# Add test executable
add_executable(${PROJECT_NAME}_test
    test_main.cpp
)

# Link against the library and add include directories
target_link_libraries(${PROJECT_NAME}_test PRIVATE ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME}_test PRIVATE ${PROJECT_SOURCE_DIR}/include)

# Add test to CTest
add_test(NAME ${PROJECT_NAME}_test COMMAND ${PROJECT_NAME}_test)
