cmake_minimum_required(VERSION 3.18.1)
project(Main LANGUAGES CXX)
add_compile_definitions(TARGET="Main")
include(../../commonqt.cmake)
#common_add_QT_REQUIRED_MODULES(Core)
common_find_QT_PROJECT_FILES(QT_PROJECT_FILES "src")
add_executable(Main ${QT_PROJECT_FILES})
target_include_directories(Main PRIVATE src)
target_link_libraries(Main
    PRIVATE
#    ${QT_REQUIRED_MODULES}
    sum
    multiplication
)
