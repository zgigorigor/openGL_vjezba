#version 330 core

layout(location = 0) out vec4 color;

in vec2 uTextureCoords;

uniform vec4 uniformColor;
uniform sampler2D uTexture;

void main()
{
	vec4 textureColor = texture(uTexture, uTextureCoords);
	color = textureColor;
}