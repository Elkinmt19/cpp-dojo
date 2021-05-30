# Structure to add a library (own one)
add_library(
    # Name of the library
    say-hello
    # Files of the library
    src/say-hello/hello.hpp
    src/say-hello/hello.cpp
)


# Add the directory of the library source's files
target_include_directories(
    say-hello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src"
)