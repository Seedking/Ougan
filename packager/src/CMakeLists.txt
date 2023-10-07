cmake_minimum_required(VERSION 3.26)
project(packager)
set(PACKAGER_VERSION 0.1.0)
set(PACKAGER_CXX_VERSION 17)
set(PACKAGER_C_VERSION 89)

add_compile_options(-Wall)
add_compile_definitions(-DVERSION="${PACKAGER_VERSION}")
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_subdirectory(util)

add_executable(${PROJECT_NAME} packager.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES CMAKE_CXX_STANDARD ${PACKAGER_CXX_VERSION})
target_link_libraries(${PROJECT_NAME} util)