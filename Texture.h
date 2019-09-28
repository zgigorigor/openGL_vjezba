<<<<<<< HEAD
#ifndef TEXTURE_H
#define TEXTURE_H

=======
#pragma once
>>>>>>> 64e267fd8c9833af90cc5edacb21e6e0522d6ed5
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

<<<<<<< HEAD
#endif // !TEXTURE_H
=======
>>>>>>> 64e267fd8c9833af90cc5edacb21e6e0522d6ed5
