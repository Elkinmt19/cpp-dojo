# Executable of the main project
add_executable(cmake-dojo main.cpp)

# Configuration for the linkers
target_link_libraries(cmake-dojo PRIVATE say-hello)