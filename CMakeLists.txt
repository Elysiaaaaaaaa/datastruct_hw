cmake_minimum_required(VERSION 3.26)
project(maze)

set(CMAKE_CXX_STANDARD 17)

add_executable(maze main.cpp
        maze.cpp
        maze.h
        my_include.h
        solution/A_star/A_star.cpp
        solution/A_star/A_star.h
        solution/bfs/bfs.cpp
        solution/bfs/bfs.h
)
