cmake_minimum_required(VERSION 3.24)
project(course1_module8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Werror")

add_executable(course1_module8 main.cpp Account.cpp Account.h Transaction.cpp Transaction.h)
