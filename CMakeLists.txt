cmake_minimum_required(VERSION 3.10)

# Project Name
project(CBMKID_AI)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the include directory
include_directories(include)

# Add the executable
add_executable(cbmkid-ai main.cpp src/cbmkid_ai.cpp)
