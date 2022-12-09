add_executable(LightLesson main.cpp)

target_link_libraries(LightLesson glfw ${GLFW_LIBRARIES} util glad)