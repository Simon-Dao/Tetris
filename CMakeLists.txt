cmake_minimum_required(VERSION 3.24)
project(Tetris)

set(CMAKE_CXX_STANDARD 23)

add_executable(Tetris main.cpp ConsoleOutput.cpp ConsoleOutput.h Game.cpp Game.h)
