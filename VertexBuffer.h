<<<<<<< HEAD
#ifndef VERTEX_BUFFER_H
#define VERTEX_BUFFER_H


=======
#pragma once
>>>>>>> 64e267fd8c9833af90cc5edacb21e6e0522d6ed5
class VertexBuffer
{
public:
	VertexBuffer(const void* data, unsigned int size);
	~VertexBuffer();

	void bind() const;
	void unbind() const;

private:
	unsigned int _Id;
};

<<<<<<< HEAD
#endif // !VERTEX_BUFFER_H
=======
>>>>>>> 64e267fd8c9833af90cc5edacb21e6e0522d6ed5
