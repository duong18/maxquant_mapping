cmake_minimum_required(VERSION 3.21)
project(maxquant_mapping)

set(CMAKE_CXX_STANDARD 14)

#add_executable(maxquant_mapping main.cpp)

# Optional: Defaults to C++ 17
# set(CSV_CXX_STANDARD 11)
add_subdirectory(csv-parser)

# ...

add_executable(maxquant_mapping main.cpp)
target_link_libraries(maxquant_mapping csv)