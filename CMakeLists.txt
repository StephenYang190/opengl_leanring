cmake_minimum_required(VERSION 3.23)
project(xurban)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(glfw)

INCLUDE_DIRECTORIES(
        include
        glfw/include
)

add_executable(xurban src/main.cpp src/glad.c src/Shader.cpp src/Shader.h)

target_link_libraries(xurban glfw ${GLFW_LIBRARIES})

add_executable(triangle src/triangle/triangle.cpp src/glad.c include/stb_image.h)

target_link_libraries(triangle glfw ${GLFW_LIBRARIES})
