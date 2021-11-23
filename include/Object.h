#pragma once

#include <glm/glm.hpp>
#include <glm/gtx/matrix_operation.hpp>
#include <glm/gtc/matrix_transform.hpp>
using glm::vec3;
using glm::mat4;

namespace Engine
{

	class Object
	{
	public:
		vec3 worldPos;
		vec3 rotation;
		vec3 scale;

		void setWorldPos(vec3 pos);
		void setEulerRotation(vec3 rotation);
		void setScale(vec3 scale);

        mat4 getModelMat();
        mat4 getRotationMat();
        mat4 getTranslationMat();
        mat4 getScaleMat();

	};
}