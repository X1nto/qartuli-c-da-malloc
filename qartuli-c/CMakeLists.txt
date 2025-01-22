cmake_minimum_required(VERSION 3.29)
project(qartuli_c C)

set(CMAKE_C_STANDARD 11)

add_library(qartuli_c STATIC qartuli.c
        striqoni.h
        dro.c
        dro.h
        matematika.c
        matematika.h)
