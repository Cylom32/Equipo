cmake_minimum_required(VERSION 3.26)
project(Tarea_de_Soccer)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Tarea_de_Soccer
        Jugador.cpp
        Jugador.h
        Club.h
        Nodo.h
        Nodo.cpp
        Lista.h
        Lista.cpp
        Club.cpp
        Main.cpp)
