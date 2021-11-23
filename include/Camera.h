#pragma once


#include <glm/glm.hpp>
#include <glm/gtx/matrix_operation.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "Object.h"

using glm::vec2;
using glm::vec3;
using glm::vec4;
using glm::mat3;
using glm::mat4;

namespace Engine
{

	class Projection
	{
	public:
		virtual mat4 getProjectionMat();
	};

	class Perspective : public Projection
	{
	public:
		mat4 getProjectionMat() override;

		GLfloat fovy = 30.0f; //field of view angle, in degrees, in the y-direction
		GLfloat nearClip = 5.0f; //near clip distance
		GLfloat farClip = 500.0f; //far clip distance
		GLfloat aspect = 1;

	};

	class Orthogonal : public Projection
	{
	public:
		mat4 getProjectionMat() override;

		GLfloat left = -10;
		GLfloat right = 10;
		GLfloat top = 10;
		GLfloat bottom = -10;
		GLfloat nearClip = 5.0f; //near clip distance
		GLfloat farClip = 500.0f; //far clip distance

	};

	class Camera : public Object
	{
	public:
		Projection projection;

		explicit Camera(const Projection &proj);

		mat4 getViewMat();
		mat4 getProjMat();
		mat4 getVPMat();



	};
}

