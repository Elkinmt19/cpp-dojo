cmake_minimum_required(VERSION 3.20.2) # Version of cmake available
project(cmake-dojo VERSION 1.0.0) # Name and version of the project

# Add the subdirectory for the libraries for the project
add_subdirectory(
    say-hello
)

# Add the subdirectory for the executable file of the project
add_subdirectory(
    hello-exe
)