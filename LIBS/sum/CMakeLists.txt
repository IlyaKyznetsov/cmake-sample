cmake_minimum_required(VERSION 3.18.1)
project(sum LANGUAGES CXX)
add_compile_definitions(TARGET="sum")
include(../../commonqt.cmake)
#common_add_QT_REQUIRED_MODULES(Core)
#find_package(ZLIB)
common_find_QT_PROJECT_FILES(QT_PROJECT_FILES "src")
common_add_library(sum SHARED ${QT_PROJECT_FILES})
target_include_directories(sum PRIVATE src/include/sum)
target_include_directories(sum PUBLIC src/include)
target_link_libraries(sum
    PUBLIC
#    z
#    ${QT_REQUIRED_MODULES}
)
