cmake_minimum_required(VERSION 3.16)
project(warm-up)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

include_directories(HEADER_FILES)
file(GLOB MAIN
    "source/main.cpp"
    )

add_executable(executable ${MAIN})
target_include_directories(executable PUBLIC headers/)