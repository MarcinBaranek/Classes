cmake_minimum_required(VERSION 3.28)

project(
        Lesson3
        VERSION 1.0
        LANGUAGES C)

add_executable(Lesson3 main.c
        domain.h
        queue.h
        queue.c
)
