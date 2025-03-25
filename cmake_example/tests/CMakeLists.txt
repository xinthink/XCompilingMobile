# Add test executable
add_executable(${PROJECT_NAME}_test
    test_main.cpp
)

# Add test to CTest
add_test(NAME ${PROJECT_NAME}_test COMMAND ${PROJECT_NAME}_test)
