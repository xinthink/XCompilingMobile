# the minimum version of CMake.
cmake_minimum_required(VERSION 3.5.0)
project(ARKTS_NDK_Sample)

set(NATIVERENDER_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

if(DEFINED PACKAGE_FIND_FILE)
    include(${PACKAGE_FIND_FILE})
endif()

# Add cmake_example library
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../../../../../cmake_example cmake_example_build)

include_directories(${NATIVERENDER_ROOT_PATH}
                    ${NATIVERENDER_ROOT_PATH}/include
                    ${CMAKE_CURRENT_SOURCE_DIR}/../../../../../cmake_example/include)

add_library(entry SHARED napi_init.cpp)
target_link_libraries(entry PUBLIC libace_napi.z.so cmake_example)
