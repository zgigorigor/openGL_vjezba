#pragma once

#include <Gl/glew.h>
#include "VertexArray.h"
#include "VertexBuffer.h"
#include "Shader.h"
#include "IndexBuffer.h"

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
};