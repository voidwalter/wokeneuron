cmake_minimum_required(VERSION 3.35)
project(woke VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)

file(GLOB TARGET_SRC "./src/*.cpp")

add_executable(main ${TARGET_SRC})
