cmake_minimum_required(VERSION 3.20.2)
project(Robotics_cpp
        VERSION 0.0.1
        DESCRIPTION "This is the OOP final of the EIA University of 2018"
        LANGUAGES CXX)
        
include(CTest)
enable_testing()

add_executable(
        Robotics_cpp main.cpp
)

target_compile_features(Robotics_cpp PRIVATE cxx_std_20)

target_include_directories(Robotics_cpp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)