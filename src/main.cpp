// GLEW
#define GLEW_STATIC
#include <GL/glew.h>
// GLFW
#include <GLFW/glfw3.h>
#define GLFW_DLL
#include<iostream>
int main()
{
		glfwInit();
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
		GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", nullptr,
		nullptr);
		if (window == nullptr)
		{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
		}
		glfwMakeContextCurrent(window);
		glViewport(0, 0, 800, 600);
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		while(!glfwWindowShouldClose(window))
		{
				glfwPollEvents();
				glfwSwapBuffers(window);
		}
		glfwTerminate();
		return 0;
}
