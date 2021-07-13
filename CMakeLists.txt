cmake_minimum_required(VERSION 3.18.1)

project(cmake-sample VERSION 0.1 LANGUAGES CXX)
include(common.cmake)

if(NOT DEFINED VERSION_MAJOR)
    set(VERSION_MAJOR "1")
endif()
if(NOT DEFINED VERSION_MINOR)
    set(VERSION_MINOR "0")
endif()

add_compile_definitions(VERSION_MAJOR=${VERSION_MAJOR}) # Мажорная версия
add_compile_definitions(VERSION_MINOR=${VERSION_MINOR}) # Минорная версия

include(commonqt.cmake)

add_subdirectory(LIBS)
add_subdirectory(APPS)

add_custom_target(cmake-sample)

