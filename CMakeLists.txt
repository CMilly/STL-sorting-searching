cmake_minimum_required(VERSION 3.14)
project(Sorting)

set(CMAKE_CXX_STANDARD 14)

include_directories(include/algorithm)
include_directories(include/utilities)

add_executable(Sorting src/main.cpp include/algorithm/algorithm.hpp include/algorithm/bsort.hpp include/algorithm/qsort.hpp include/algorithm/slcsort.hpp include/utilities/util.hpp include/algorithm/isort.hpp)