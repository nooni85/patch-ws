cmake_minimum_required(VERSION 3.22)
project(wspatch)

set(CMAKE_CXX_STANDARD 17)
include(cmake/CMakeRC.cmake)

include_directories(include)

file(GLOB_RECURSE RESOURCES RELATIVE ${CMAKE_SOURCE_DIR} "res/*.patch")
file(GLOB SOURCES "src/*.cpp" "src/*.c")

add_executable(wspatch ${SOURCES}
        src/parser.cpp
        include/parser.h)
cmrc_add_resource_library(rc_wspatch NAMESPACE rc ${RESOURCES})
target_link_libraries(wspatch PRIVATE rc_wspatch)