cmake_minimum_required(VERSION 3.4)
project(conan_hello)

set(CMAKE_VERBOSE_MAKEFILE True)

include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(${CMAKE_PROJECT_NAME} demo.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} ${CONAN_LIBS})
