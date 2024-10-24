cmake_minimum_required(VERSION 3.28)

project(
        App
        VERSION 1.0
        LANGUAGES C)

add_executable(App main.c quadratic_equation_solver.c test.c
        domain.c
        domain.h
        quadratic_equation_solver.h)
