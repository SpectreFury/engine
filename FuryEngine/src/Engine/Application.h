#pragma once

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "Window/Window.h"

class Application
{
public:
    Window* window;
    Application();
    ~Application();

    void Run();

};
