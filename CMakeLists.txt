cmake_minimum_required(VERSION 3.24)
project(itnPJC)

set(CMAKE_CXX_STANDARD 17)

set(task01_src "task1/main1.cpp")
add_executable(main1 ${task1_src} task03/main3.cpp task03/main3.cpp)

set(task02_src "task2/main2.cpp")
add_executable(main2 ${task2_src})

set(task03_src "task3/main3.cpp")
add_executable(main3 ${task3_src})