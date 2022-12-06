//
// Created by tongdayang on 11/30/22.
//

#ifndef XURBAN_SHADER_H
#define XURBAN_SHADER_H

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

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
};


#endif //XURBAN_SHADER_H
