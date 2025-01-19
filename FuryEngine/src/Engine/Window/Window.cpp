#include "Window.h"

void framebuffer_size_callback(GLFWwindow *window, int width, int height)
{
    glViewport(0, 0, width, height);
}

Window::Window(int width, int height, const char *windowName)
{
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    glfwWindow = glfwCreateWindow(width, height, windowName, NULL, NULL);
    if (!glfwWindow)
    {
        // Add a logger
        std::cout << "Unable to create a window" << std::endl;
    }

    glfwMakeContextCurrent(glfwWindow);
    glfwSetFramebufferSizeCallback(glfwWindow, framebuffer_size_callback);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        // Add a logger
        std::cout << "Unable to load GLAD" << std::endl;
    }
}

Window::~Window()
{
    glfwTerminate();
}

void Window::PollEvents()
{
    glfwPollEvents();
    glfwSwapBuffers(glfwWindow);
}

bool Window::ShouldClose()
{
    return glfwWindowShouldClose(glfwWindow);
}

void Window::ClearColor(float r, float g, float b, float a)
{
    glClearColor(r, g, b, a);
    glClear(GL_COLOR_BUFFER_BIT);
}