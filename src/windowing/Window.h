//
// Created by creeper on 11/5/21.
//

#ifndef QUARK_WINDOW_H
#define QUARK_WINDOW_H

#include "../node/World.h"

#include <string>
#include <memory>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace windowing {
    struct WindowProperties {
        int width,
                height;
        std::string title;

    };

    struct GLFWwindowDestroyer {
        void operator()(GLFWwindow* ptr) {
            glfwDestroyWindow(ptr);
        }
    };

    class Window {
    public:
        explicit Window(const WindowProperties& props);
        ~Window();

        void Run();

        node::World *GetWorld();
    private:
        std::unique_ptr<GLFWwindow, GLFWwindowDestroyer> window = {};
        node::World world;
    };
}

#endif //QUARK_WINDOW_H
