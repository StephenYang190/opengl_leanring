cmake_minimum_required(VERSION 3.23)
project(xurban)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(glfw)

INCLUDE_DIRECTORIES(
        include
        glfw/include
        src
)

add_library(glad SHARED
        src/glad.c
        )

add_subdirectory(src/util)

add_subdirectory(src/LightLesson)

add_subdirectory(src/multiLight)

add_executable(xurban src/main.cpp)

target_link_libraries(xurban glfw ${GLFW_LIBRARIES} util glad)
