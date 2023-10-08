cmake_minimum_required(VERSION 3.26)
project(message_box)

add_library(${PROJECT_NAME} STATIC message_box.cpp message_box.hpp)