cmake_minimum_required(VERSION 3.28)
project(Bingo C)

set(CMAKE_C_STANDARD 11)

add_executable(Bingo main.c
        lib/lista_ordenada.h
        lib/lista_ordenada.c
        lib/menu.h
        lib/menu.c
        lib/bibliotecas.h)
