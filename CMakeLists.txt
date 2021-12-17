cmake_minimum_required(VERSION 3.15)
project(maxquant_mapping)

set(CMAKE_CXX_STANDARD 14)

add_library(csv INTERFACE)
target_include_directories(csv INTERFACE "csv-parser/single_include")

add_executable(maxquant_mapping main.cpp)
target_link_libraries(maxquant_mapping csv)