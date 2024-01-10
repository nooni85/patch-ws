cmake_minimum_required(VERSION 3.22)
project(wspatch)

include(cmake/CMakeRC.cmake)

file(GLOB_RECURSE RESOURCES RELATIVE ${CMAKE_SOURCE_DIR} "res/*.txt")
cmrc_add_resource_library(lpvpn-resources ALIAS lpvpn::rc NAMESPACE lpvpn)
cmrc_add_resources(lpvpn-resources WHENCE res ${RESOURCES})

set(CMAKE_CXX_STANDARD 17)

add_executable(wspatch main.cpp)
