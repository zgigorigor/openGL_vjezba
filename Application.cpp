#include "Renderer.h"
#include <GLFW/glfw3.h>
#include "stb_image.h"

#include "VertexBuffer.h"
#include "VertexBufferLayout.h"
#include "IndexBuffer.h"
#include "VertexArray.h"
#include "Shader.h"
#include "Texture.h"

int main(void)
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);

	if (glewInit() != GLEW_OK)
	{
		std::cout << "Error initializing glew library!" << std::endl;
	}
	else
	{
		std::cout << "Glew initialized successfully!" << std::endl;
	}

	std::cout << glGetString(GL_VERSION) << std::endl;

	float positions[] =
	{
		-0.5f, -0.5f, 0.0f, 0.0f, // 0
		0.5f, -0.5f, 1.0f, 0.0f,  // 1
		0.5f, 0.5f, 1.0f, 1.0f,   // 2
		-0.5f, 0.5f, 0.0f, 1.0f   // 3
	};

	unsigned int indices[]
	{
		0, 1, 2,
		2, 3, 0
	};

	VertexArray vertexArray;
	VertexBuffer vertexBuffer(positions, 4 * 4 * sizeof(float));

	VertexBufferLayout layout;
	layout.push<float>(2);
	layout.push<float>(2);

	vertexArray.addBuffer(vertexBuffer, layout);

	IndexBuffer indexBuffer(indices, 6);

	Shader shader("Shaders");
	shader.bind();
	shader.setUniformLocation1i("uTexture", 0);

	vertexArray.unbind();
	vertexBuffer.unbind();
	indexBuffer.unbind();
	shader.unbind();


	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);
		//glDrawArrays(GL_TRIANGLES, 0, 3);
		glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, nullptr);
		/* Swap front and back buffers */
		glfwSwapBuffers(window);
		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}