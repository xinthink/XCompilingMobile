# Add executable target
add_executable(${PROJECT_NAME}
    main.cpp
)

# Include directories
target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)
