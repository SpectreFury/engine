#pragma once

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

void framebuffer_size_callback(GLFWwindow *window, int width, int height);

class Window
{
public:
    Window(int width, int height, const char *windowName);
    ~Window();

    void PollEvents();
    void ClearColor(float r, float g, float b, float a);
    bool ShouldClose();

    GLFWwindow *glfwWindow;
};