#pragma once
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

