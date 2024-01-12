cmake_minimum_required(VERSION 3.23)

project(rlottie_verifier)

set(CMAKE_CXX_STANDARD 14)

add_executable(rlottie_verifier main.cpp)

# add rlottie library
include_directories(rlottie/inc)
add_subdirectory(rlottie)
target_link_libraries(rlottie_verifier rlottie)
