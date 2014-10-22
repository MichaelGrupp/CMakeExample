# Project Name
set(PROJECT_NAME cmakeTest)
project(${PROJECT_NAME})
cmake_minimum_required(VERSION 2.6)


# Sub-directories where more CMakeLists.txt exist
add_subdirectory(myTestLib)
add_subdirectory(myTestApp)
