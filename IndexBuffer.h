<<<<<<< HEAD
#ifndef INDEX_BUFFER_H
#define INDEX_BUFFER_H


=======
#pragma once
>>>>>>> 64e267fd8c9833af90cc5edacb21e6e0522d6ed5
class IndexBuffer
{
public:
	IndexBuffer(const unsigned int* data, unsigned int count);
	~IndexBuffer();

	void bind() const;
	void unbind() const;
	inline unsigned int getCount() const { return _count; }

private:
	unsigned int _Id;
	unsigned int _count;

};

<<<<<<< HEAD
#endif // !INDEX_BUFFER_H
=======
>>>>>>> 64e267fd8c9833af90cc5edacb21e6e0522d6ed5
