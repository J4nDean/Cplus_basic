cmake_minimum_required(VERSION 3.24)
project(itnPJC)

set(CMAKE_CXX_STANDARD 17)

set(task01_src "task01/main1.cpp")
add_executable(main1 ${task01_src})

set(task02_src "task02/main2.cpp")
add_executable(main2 ${task02_src})

set(task03_src "task03/main3.cpp")
add_executable(main3 ${task03_src})