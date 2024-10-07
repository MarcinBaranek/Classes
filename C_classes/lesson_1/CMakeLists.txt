cmake_minimum_required(VERSION 3.28)

project(
        App
        VERSION 1.0
        LANGUAGES C)

add_executable(App main.c is_prime.c test_is_prime.c)
