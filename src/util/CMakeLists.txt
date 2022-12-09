add_library(util SHARED
        camera.cpp camera.h
        shader.cpp shader.h
        texture.h light.cpp light.h)

target_link_libraries(util glfw ${GLFW_LIBRARIES})