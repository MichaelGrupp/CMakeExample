# Project Name
set(SUBPROJECT_NAME myTestApp)
project(${SUBPROJECT_NAME})
cmake_minimum_required(VERSION 2.6)

# Add the given directories to those the compiler uses to search for include files.
include_directories(${myTestLib_SOURCE_DIR}/include)

# The executable source file of this project
add_executable (${SUBPROJECT_NAME} main.cpp)

# link additional libraries to this project
target_link_libraries(${SUBPROJECT_NAME} myTestLib)