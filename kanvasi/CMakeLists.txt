cmake_minimum_required(VERSION 3.29)
project(kanvasi C)

set(CMAKE_C_STANDARD 23)

add_executable(kanvasi main.c)
target_link_libraries(kanvasi PRIVATE qartuli_c)
