cmake_minimum_required(VERSION 3.20.2) # Version of cmake available
project(cmake-dojo VERSION 1.0.0) # Name and version of the project

# Structure to add a library (own one)
add_library(
    # Name of the library
    say-hello
    # Files of the library
    hello.hpp
    hello.cpp
)

# Executable of the main project
add_executable(cmake-dojo main.cpp)

# Configuration for the linkers
target_link_libraries(cmake-dojo PRIVATE say-hello)