cmake_minimum_required(VERSION 3.29)
project(qartuli_c C)

set(CMAKE_C_STANDARD 23)

add_library(qartuli_c STATIC qartuli.h
        striqoni.h
        dro.c
        dro.h
        matematika.c
        matematika.h
        stdsheyvana.c
        stdsheyvana.h
        stdbiblioteka.h)
target_include_directories(qartuli_c PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
