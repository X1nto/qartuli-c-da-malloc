project(kanvasi C)

add_executable(kanvasi kanvasi.c)
target_link_libraries(kanvasi PRIVATE qartuli_c)
