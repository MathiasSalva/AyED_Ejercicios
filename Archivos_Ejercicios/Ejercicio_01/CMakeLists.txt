cmake_minimum_required(VERSION 3.20)
project(Ejercicio_01)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ejercicio_01 main.cpp)
target_link_libraries(${PROJECT_NAME} ncurses)