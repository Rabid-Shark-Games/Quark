//
// Created by creeper on 11/5/21.
//

#include "Window.h"
#include "../node/CameraQuark.h"

windowing::Window::Window(const windowing::WindowProperties &props) {
    glewExperimental = true;
    if (!glfwInit()) {
        return;
    }

//    glfwWindowHint(GLFW_SAMPLES, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    this->window = std::unique_ptr<GLFWwindow, GLFWwindowDestroyer>(glfwCreateWindow(
            props.width,
            props.height,
            props.title.c_str(),
            nullptr,
            nullptr
    ));

    glfwMakeContextCurrent(this->window.get());

    glewExperimental = true;
    if (glewInit() != GLEW_OK) {
        return;
    }
}

void windowing::Window::Run() {
    if (!this->window) {
        return;
    }

    while (!glfwWindowShouldClose(this->window.get())) {
        if (!this->world.GetCurrentCamera().expired()) {
            this->world.GetCurrentCamera().lock()->GetQuark<node::quark::CameraQuark>().lock()->CameraBegin(
                    this->window.get());
        }

        this->world.Process();

        if (!this->world.GetCurrentCamera().expired()) {
            this->world.GetCurrentCamera().lock()->GetQuark<node::quark::CameraQuark>().lock()->CameraEnd(
                    this->window.get());
        }

        glfwPollEvents();
    }
}

windowing::Window::~Window() {
    glfwTerminate();
}

node::World *windowing::Window::GetWorld() {
    return &this->world;
}
