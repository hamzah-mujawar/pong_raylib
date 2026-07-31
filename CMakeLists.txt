cmake_minimum_required(VERSION 3.5)
project(pong_raylib CXX)

find_package(raylib REQUIRED)

add_executable(pong_raylib
    main.cpp 
    Ball.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
