#include "VertexArray.h"
#include "VertexBufferLayout.h"
#include "Renderer.h"


VertexArray::VertexArray()
{
	glVerify(glGenVertexArrays(1, &_Id));
}


VertexArray::~VertexArray()
{
	glVerify(glDeleteVertexArrays(1, &_Id));
}

void VertexArray::addBuffer(const VertexBuffer & buffer, const VertexBufferLayout & layout)
{
	bind();
	buffer.bind();
	const std::vector<VertexBufferElement>& elements = layout.getElements();
	unsigned int offset = 0;

	for (unsigned int i = 0; i < elements.size(); i++)
	{
		const VertexBufferElement& element = elements[i];
		glVerify(glEnableVertexAttribArray(i));
		glVerify(glVertexAttribPointer(i, element.count, element.type, element.normalized, layout.getStride(), 
			(const void*)offset));
		offset *= element.count * VertexBufferElement::getSizeOfType(element.type);
	}
}

void VertexArray::bind() const
{
	glVerify(glBindVertexArray(_Id));
}

void VertexArray::unbind() const
{
	glVerify(glBindVertexArray(0));
}
