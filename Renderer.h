<<<<<<< HEAD
#ifndef RENDERER_H
#define RENDERER_H
=======
#pragma once
>>>>>>> 64e267fd8c9833af90cc5edacb21e6e0522d6ed5

#include <Gl/glew.h>
#include "VertexArray.h"
#include "VertexBuffer.h"
#include "Shader.h"
#include "IndexBuffer.h"

<<<<<<< HEAD

=======
>>>>>>> 64e267fd8c9833af90cc5edacb21e6e0522d6ed5
#define Assert(func) if(!(func));

#define glVerify(func) glClearErrors();\
		func;\
		Assert(glLogError(#func, __FILE__, __LINE__));\


void glClearErrors();

bool glLogError(const char* functionName, const char* filename, int line);

class Renderer
{
public:
	Renderer();
	~Renderer();

	void clear();
	void draw(const VertexArray& vertexArray, const IndexBuffer& indexBuffer, const Shader& shader);
<<<<<<< HEAD
};

#endif // !RENDERER_H
=======
};
>>>>>>> 64e267fd8c9833af90cc5edacb21e6e0522d6ed5
