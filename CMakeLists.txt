cmake_minimum_required(VERSION 3.5)

project(cmake-sample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cmake-sample main.cpp)
