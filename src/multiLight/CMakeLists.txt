add_executable(multiLight main.cpp)

target_link_libraries(multiLight glfw ${GLFW_LIBRARIES} util glad)