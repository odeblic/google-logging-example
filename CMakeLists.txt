cmake_minimum_required(VERSION 2.6)

project(glog)

find_package(gflags)
find_package(glog)

add_executable(example example.cpp)

target_link_libraries(example glog)
target_link_libraries(example gflags)

