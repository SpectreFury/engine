cmake_minimum_required(VERSION 3.10)
project(FuryEngine)

add_library(engine STATIC 
    FuryEngine/src/Engine/Application.h
    FuryEngine/src/Engine/Application.cpp
    FuryEngine/src/Engine/Window/Window.h
    FuryEngine/src/Engine/Window/Window.cpp

    FuryEngine/src/utils/glad.c
    )

target_include_directories(engine PRIVATE FuryEngine/Dependencies/include)
target_link_directories(engine PRIVATE FuryEngine/Dependencies/lib)
target_link_libraries(engine GLFW/glfw3)

add_executable(sandbox Sandbox/src/main.cpp)

target_include_directories(sandbox PRIVATE 
    FuryEngine/src
    FuryEngine/Dependencies/include
    )
target_link_directories(sandbox PRIVATE FuryEngine/Dependencies/lib)
target_link_libraries(sandbox engine)