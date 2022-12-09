//
// Created by tongdayang on 12/9/22.
//

#include "light.h"

Light::Light(glm::vec3 ambient, glm::vec3 diffuse, glm::vec3 specular, std::string name) :
        ambient_(ambient),
        diffuse_(diffuse),
        specular_(specular),
        name_(name) {

}

void Light::setLight(Shader &progrom) {
    progrom.use();

    progrom.setVec3(name_ + ".ambient", ambient_);
    progrom.setVec3(name_ + "diffuse", diffuse_);
    progrom.setVec3(name_ + "specular", specular_);
}

Light::Light() {

}

DirLight::DirLight(glm::vec3 direction, glm::vec3 ambient, glm::vec3 diffuse, glm::vec3 specular, std::string name) :
        Light(ambient, diffuse, specular, name), direction_(direction) {

}

void DirLight::setLight(Shader &progrom) {
    Light::setLight(progrom);
    progrom.setVec3(name_ + "direction", direction_);
}

DirLight::DirLight() {

}

PointLight::PointLight(float constant, float linear, float quadratic, glm::vec3 position, glm::vec3 ambient,
                       glm::vec3 diffuse, glm::vec3 specular, std::string name) :
        Light(ambient, diffuse, specular, name),
        position_(position),
        constant_(constant),
        linear_(linear),
        quadratic_(quadratic) {

}

void PointLight::setLight(Shader &progrom) {
    Light::setLight(progrom);
    progrom.setVec3(name_ + "position", position_);
    progrom.setFloat(name_ + ".constant", constant_);
    progrom.setFloat(name_ + ".linear", linear_);
    progrom.setFloat(name_ + ".quadratic", quadratic_);
}

PointLight::PointLight() {

}

SpotLight::SpotLight(glm::vec3 direction, float constant, float linear, float quadratic, glm::vec3 position,
                     glm::vec3 ambient, glm::vec3 diffuse, glm::vec3 specular, std::string name, float cutOff,
                     float outerCutOff) :
        PointLight(constant, linear, quadratic, position, ambient, diffuse, specular, name),
        direction_(direction),
        cutOff_(cutOff),
        outerCutOff_(outerCutOff) {

}

void SpotLight::setLight(Shader &progrom) {
    PointLight::setLight(progrom);
    progrom.setVec3(name_ + "direction", direction_);
}

SpotLight::SpotLight() {

}
