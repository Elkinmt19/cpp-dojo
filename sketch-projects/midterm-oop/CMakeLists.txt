cmake_minimum_required(VERSION 3.20.2)
project(Midterm_cpp_code
        VERSION 0.0.1
        DESCRIPTION "This is the OOP midterm of the EIA University of 2018"
        LANGUAGES CXX)  


file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(Midterm_oop_cpp main.cpp ${SOURCE_FILES})

target_compile_features(Midterm_oop_cpp PRIVATE cxx_std_20)

target_include_directories(Midterm_oop_cpp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)