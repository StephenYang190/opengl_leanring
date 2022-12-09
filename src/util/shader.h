//
// Created by tongdayang on 11/30/22.
//

#ifndef WORKSPACE_SHADER_H
#define WORKSPACE_SHADER_H

#include "glad/glad.h"

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp"

class Shader {
public:
    unsigned int ID;

    Shader(const std::string vertexPath, const std::string fragmentPath);

    void use();

    ~Shader();

    void setBool(const std::string &name, bool value) const;

    void setInt(const std::string &name, int value) const;

    void setFloat(const std::string &name, float value) const;

    void setMat4(const std::string &name, glm::mat4 value) const;

    void setVec3(const std::string &name, float x, float y, float z) const;

    void setVec3(const std::string &name, glm::vec3 value) const;
};


#endif //WORKSPACE_SHADER_H
