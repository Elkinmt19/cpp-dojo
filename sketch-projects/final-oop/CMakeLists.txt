cmake_minimum_required(VERSION 3.20.2)
project(Final_cpp_code
        VERSION 0.0.1
        DESCRIPTION "This is the OOP final of the EIA University of 2018"
        LANGUAGES CXX)  


add_executable(
        Final_oop_cpp main.cpp
)

target_compile_features(Final_oop_cpp PRIVATE cxx_std_20)

target_include_directories(Final_oop_cpp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)