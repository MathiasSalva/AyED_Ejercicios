cmake_minimum_required(VERSION 3.19)
project(AyED_Season_2)

set(CMAKE_CXX_STANDARD 14)

include_directories("Tema 5 Arrays")
include_directories("Tema 5 Arrays/20210710_ARRAYS (1)")
include_directories("Tema 5 Arrays/20210710_ARRAYS (1)/20210710_ARRAYS")

add_executable(AyED_Season_2
        "Tema 5 Arrays/20210710_ARRAYS (1)/20210710_ARRAYS/20210710_ARRAYS.cbp"
        "Tema 5 Arrays/20210710_ARRAYS (1)/20210710_ARRAYS/20210710_ARRAYS.depend"
        "Tema 5 Arrays/20210710_ARRAYS (1)/20210710_ARRAYS/20210710_ARRAYS.layout"
        "Tema 5 Arrays/20210710_ARRAYS (1)/20210710_ARRAYS/main.cpp")
