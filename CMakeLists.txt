cmake_minimum_required(VERSION 3.31)
project(DynamicProgramming)

set(CMAKE_CXX_STANDARD 20)

add_executable(DynamicProgramming minimum_operations.cpp
        coin_change.cpp
        max_product_cutting.cpp
        min_deletions_and_inserts.cpp
        longest_common_subsequence.cpp
        subset_sum.cpp
        longest_increasing_subsequence.cpp
        edit_distance.cpp
        longest_increasing_path.cpp)
