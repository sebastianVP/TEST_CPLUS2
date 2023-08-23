cmake_minimum_required(VERSION 3.13)

project(thread_sample)
SET(CMAKE_CXX_STANDARD 17)
find_package (Threads)

add_executable(mainApp avp_thread2.cpp)

target_link_libraries(mainApp Threads::Threads)
