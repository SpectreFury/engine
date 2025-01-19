#include "Application.h"

Application::Application()
{
    window = new Window(800, 600, "FuryEngine");
};
Application::~Application()
{
    delete window;
};

void Application::Run()
{
    while (!window->ShouldClose())
    {
        window->ClearColor(1.0f, 0.5f, 0.5f, 1.0f);

        //Draw things

        window->PollEvents();
    }
};
