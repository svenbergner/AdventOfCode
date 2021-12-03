cmake_minimum_required(VERSION 3.0.0)
project(AdventOfCode VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(AoC2021Day1Puzzle1 2021/Day1/puzzle1.cpp)
add_executable(AoC2021Day1Puzzle2 2021/Day1/puzzle2.cpp)

add_executable(AoC2021Day2Puzzle1 2021/Day2/puzzle1.cpp)
add_executable(AoC2021Day2Puzzle2 2021/Day2/puzzle2.cpp)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
