//
// Created by tongdayang on 12/9/22.
//

#ifndef XURBAN_LIGHT_H
#define XURBAN_LIGHT_H

#include "glad/glad.h"
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp"
#include "util/shader.h"
#include <string>

class Light {
public:
    glm::vec3 ambient_, diffuse_, specular_;
    std::string name_;

    Light(glm::vec3 ambient, glm::vec3 diffuse, glm::vec3 specular, std::string name);

    Light();

    void setLight(Shader &progrom);
};

class DirLight : public Light {
public:
    glm::vec3 direction_;

    DirLight(glm::vec3 direction, glm::vec3 ambient, glm::vec3 diffuse, glm::vec3 specular, std::string name);

    DirLight();

    void setLight(Shader &progrom);
};

class PointLight : public Light {
public:
    glm::vec3 position_;
    float constant_, linear_, quadratic_;

    PointLight(float constant, float linear, float quadratic, glm::vec3 position, glm::vec3 ambient, glm::vec3 diffuse,
               glm::vec3 specular, std::string name);

    PointLight();

    void setLight(Shader &progrom);
};

class SpotLight : public PointLight {
public:
    glm::vec3 direction_;
    float cutOff_, outerCutOff_;

    SpotLight(glm::vec3 direction, float constant, float linear, float quadratic, glm::vec3 position, glm::vec3 ambient,
              glm::vec3 diffuse,
              glm::vec3 specular, std::string name, float cutOff, float outerCutOff);

    SpotLight();

    void setLight(Shader &progrom);
};


#endif //XURBAN_LIGHT_H
