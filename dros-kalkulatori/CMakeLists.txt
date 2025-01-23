cmake_minimum_required(VERSION 3.29)
project(kalkulatori C)

set(CMAKE_C_STANDARD 23)

add_executable(dros-kalkulatori main.c
        ../kanvasi/main.c)
target_link_libraries(dros-kalkulatori PRIVATE qartuli_c)
