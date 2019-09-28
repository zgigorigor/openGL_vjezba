#ifndef VERTEX_ARRAY_H
#define VERTEX_ARRAY_H

#include "VertexBuffer.h"
#include "VertexBufferLayout.h"
#include "VertexBuffer.h"
#include "VertexBufferLayout.h"


class VertexArray
{
public:
	VertexArray();
	~VertexArray();

	void addBuffer(const VertexBuffer& buffer, const VertexBufferLayout& layout);
	void bind() const;
	void unbind() const;

private:
	unsigned int _Id;
};

#endif // !VERTEX_ARRAY_H