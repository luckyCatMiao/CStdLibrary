cmake_minimum_required(VERSION 3.9)
project(2018_2_3StringLibrary C)

set(CMAKE_C_STANDARD 99)


add_executable(2018_2_3StringLibrary main.c mstring.c mstring.h util.c util.h boolean.c boolean.h array.c array.h list.c list.h precondition.c precondition.h)