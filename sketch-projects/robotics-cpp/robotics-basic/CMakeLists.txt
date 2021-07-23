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