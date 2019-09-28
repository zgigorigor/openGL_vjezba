<<<<<<< HEAD
#ifndef SHADER_H
#define SHADER_H

=======
#pragma once
>>>>>>> 64e267fd8c9833af90cc5edacb21e6e0522d6ed5
#include "Renderer.h"
#include <iostream>
#include <unordered_map>

<<<<<<< HEAD

=======
>>>>>>> 64e267fd8c9833af90cc5edacb21e6e0522d6ed5
class Shader
{
public:
	Shader(const std::string& filepath);
	~Shader();

	void bind() const;
	void unbind() const;

	void setUniformLocation1f(std::string name, float value);
	void setUniformLocation4f(std::string name, float value0, float value1, float value2, float value3);
	void setUniformLocation1i(std::string name, int value);

private:
	std::string _filepath;
	unsigned int _Id;
	std::unordered_map<std::string, int> _uniformCache;

	std::string _parseShader(const std::string& filepath);
	unsigned int _compileShader(GLenum type, const std::string& source);
	unsigned int _createShader(const std::string& vertexSource, const std::string& fragmentSource);

	int _getUniformLocation(const std::string& name);
};

<<<<<<< HEAD
#endif // !SHADER_H
=======
>>>>>>> 64e267fd8c9833af90cc5edacb21e6e0522d6ed5
