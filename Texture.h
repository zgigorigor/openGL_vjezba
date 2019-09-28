#ifndef TEXTURE_H
#define TEXTURE_H

#include "Renderer.h"


class Texture
{
public:
	Texture(std::string filepath);
	~Texture();


	void bind(unsigned int slot) const;
	void unbind() const;

private:
	unsigned int _Id;
	int _width, _height, _bitsPerPixel;
	std::string _filepath;
	unsigned char* _buffer;
};

#endif // !TEXTURE_H