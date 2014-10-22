# Subproject Name
set(SUBPROJECT_NAME myTestLib)
project(${SUBPROJECT_NAME})
cmake_minimum_required(VERSION 2.6)


# Source and header files:
set(SOURCE
        src/mathLibs/SimpleFunctions.cpp
        src/mathLibs/AdvancedFunctions.cpp
)

set(HEADERS
        include/mathLibs/SimpleFunctions.h
        include/mathLibs/AdvancedFunctions.h
)

# Add the given directories to those the compiler uses to search for include files. 
include_directories("include")

# add the libraries (first parameter will be the name of the library)
# SHARED  ,   STATIC  or MODULE (see cmake documentation) - is optional
# the library can be accessed in top-level project via the subproject name
add_library(${SUBPROJECT_NAME} ${SOURCE} ${HEADERS})
