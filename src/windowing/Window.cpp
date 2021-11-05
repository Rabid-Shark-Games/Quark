//
// Created by creeper on 11/5/21.
//

#include "Window.h"

windowing::Window::Window(const windowing::WindowProperties& props) {
    if (!glfwInit()) {
        return;
    }

    this->window = std::unique_ptr<GLFWwindow, GLFWwindowDestroyer>(glfwCreateWindow(
            props.width,
            props.height,
            props.title.c_str(),
            nullptr,
            nullptr
    ));
}

void windowing::Window::Run() {
    if (!this->window) {
        return;
    }

    glfwMakeContextCurrent(this->window.get());

    while (!glfwWindowShouldClose(this->window.get())) {
        glClearColor(0.03, 0.17, 0.53, 1.0);

        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(this->window.get());

        glfwPollEvents();
    }
}

windowing::Window::~Window() {
    glfwTerminate();
}
