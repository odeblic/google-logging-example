cmake_minimum_required(VERSION 2.6)

PROJECT(glog)

#find_package(glog)

ADD_EXECUTABLE(example example.cpp)

target_link_libraries(example glog)
target_link_libraries(example gflags)

