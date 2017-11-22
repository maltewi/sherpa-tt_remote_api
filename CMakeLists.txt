cmake_minimum_required(VERSION 3.0)

project(sherpa_tt_remote_api CXX)
set(CMAKE_SHARED_LINKER_FLAGS "-std=c++11")
add_compile_options(-std=c++11 -O0 -g3 -fmessage-length=0 -frecord-gcc-switches)
set(CMAKE_BUILD_TYPE Release)

add_subdirectory(types)
include_directories(types)
add_subdirectory(client)
add_subdirectory(server)

