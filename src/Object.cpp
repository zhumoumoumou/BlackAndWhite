#include "../include/Object.h"

void Engine::Object::setWorldPos(vec3 pos)
{
    worldPos = pos;
}

mat4 Engine::Object::getRotationMat() {
    return glm::rotate(worldPos);
}

mat4 Engine::Object::getTranslationMat() {
    return glm::translate(worldPos);
}

mat4 Engine::Object::getModelMat() {
    return getTranslationMat() * getRotationMat() * getScaleMat();
}

mat4 Engine::Object::getScaleMat() {
    return glm::scale(scale);
}
