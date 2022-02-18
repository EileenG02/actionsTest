cmake_minimum_required(VERSION 3.16)
project(actionsTest)

set(CMAKE_CXX_STANDARD 14)

#input files
set (input01 "input/helloWorld.txt")

#copy to input files to build folder
foreach(file IN LISTS input01)
    configure_file(${file} ${file} COPYONLY)
endforeach()

add_executable(actionsTest
        main.cpp)
