cmake_minimum_required(VERSION 3.26)
project(file_system)

add_library(${PROJECT_NAME} STATIC path.cpp path.hpp)
target_link_libraries(${PROJECT_NAME} shlwapi)