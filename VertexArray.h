<<<<<<< HEAD
#ifndef VERTEX_ARRAY_H
#define VERTEX_ARRAY_H

#include "VertexBuffer.h"
#include "VertexBufferLayout.h"


=======
#pragma once
#include "VertexBuffer.h"
#include "VertexBufferLayout.h"

>>>>>>> 64e267fd8c9833af90cc5edacb21e6e0522d6ed5
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

<<<<<<< HEAD
#endif // !VERTEX_ARRAY_H
=======
>>>>>>> 64e267fd8c9833af90cc5edacb21e6e0522d6ed5
