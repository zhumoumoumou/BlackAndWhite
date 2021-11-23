
#include "../include/Camera.h"

mat4 Engine::Perspective::getProjectionMat()
{
    return glm::perspective(glm::radians(this->fovy), this->aspect, this->nearClip, this->farClip);
}

mat4 Engine::Orthogonal::getProjectionMat()
{
    return glm::ortho(this->left, this->right, this->bottom, this->top, this->nearClip, this->farClip);
}

mat4 Engine::Projection::getProjectionMat()
{
    return {};
}

Engine::Camera::Camera(const Projection &proj) : Object()
{
    this->projection = proj;
}

mat4 Engine::Camera::getProjMat()
{
    return projection.getProjectionMat();
}

mat4 Engine::Camera::getVPMat()
{
    return getViewMat() * getProjMat();
}

mat4 Engine::Camera::getViewMat() {
    return glm::translate(-worldPos)
        * getRotationMat()
        * glm::lookAt(worldPos, worldPos - glm::vec3(0,0,1), glm::vec3(0,1,0));
}
