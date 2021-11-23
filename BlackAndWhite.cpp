
#include <cstdio>
#include <cmath>

#include <glm/glm.hpp>
#include <GL/glut.h>

#include "BlackAndWhite.h"


namespace Engine
{
	using glm::vec2;
	using glm::vec3;
	using glm::vec4;
	using glm::mat3;
	using glm::mat4;


	class Triangle
	{
	public:
		vec3 vertex[3];
		vec2 tex_coords[3];
		vec3 normal[3];
		vec3 tangent[3];

		Triangle();

		void setVertex(int ind, vec3 vertex);
		void setNormal(int ind, vec3 normal);
		void setTangent(int ind, vec3 normal);
		void setTexcoord(int ind, vec2 tex_coord);
	};


	class TriangleRenderer
	{



	};

}


void display() {




	glutSwapBuffers();
}

int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow(argv[0]);
	glutDisplayFunc(display);

    glClear(GL_COLOR_BUFFER_BIT);

	glutMainLoop();
    return 0;
}
