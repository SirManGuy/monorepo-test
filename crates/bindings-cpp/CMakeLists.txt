cmake_minimum_required(VERSION 3.20)
project(bindings_cpp LANGUAGES CXX)

add_library(pretendlib STATIC
    src/pretendlib.cpp
)

target_include_directories(pretendlib
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_compile_features(pretendlib PUBLIC cxx_std_17)
