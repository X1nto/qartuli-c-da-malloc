
project(qartuli_c C)

add_library(qartuli_c INTERFACE
        qartuli.h
        striqoni.h
        dro.h
        matematika.h
        stdsheyvana.h
        stdbiblioteka.h)
target_include_directories(qartuli_c INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
