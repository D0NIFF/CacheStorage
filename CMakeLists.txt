cmake_minimum_required(VERSION 3.29)
project(CacheStorage)

set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_CXX_FLAGS "-Wall -std=c++0x")
set(CMAKE_CXX_STANDARD 26)

add_subdirectory("source")